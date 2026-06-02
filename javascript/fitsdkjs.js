// Official Garmin FIT JavaScript SDK
const { Decoder, Stream } = require('@garmin/fitsdk');
const fs = require('fs');
const path = require('path');

const file = process.argv[2];
const bytes = fs.readFileSync(file);

const starttime = new Date();

const stream = Stream.fromByteArray(bytes);
const decoder = new Decoder(stream);
const { messages, errors } = decoder.read();

const elapsed = (new Date() - starttime) / 1000.0;

const records = messages.recordMesgs || [];
const laps = messages.lapMesgs || [];

console.log('record: %d', records.length);
console.log('laps: %d', laps.length);
console.log('| javascript | fitsdkjs | %s | %s seconds | [FIT SDK for JavaScript](https://github.com/garmin/fit-javascript-sdk) |',
            path.basename(file), elapsed.toFixed(3));
