#!/usr/bin/env python3

from garmin_fit_sdk import Decoder, Stream
import sys
import time
import os

start = time.time()

stream = Stream.from_file( sys.argv[1] )
decoder = Decoder( stream )
messages, errors = decoder.read()

records = messages.get( 'record_mesgs', [] )
laps = messages.get( 'lap_mesgs', [] )

print( 'record: {} messages'.format( len( records ) ) )
print( 'laps: {} messages'.format( len( laps ) ) )
end = time.time()

print( "| python | {} | {} | {:.3f} seconds | [FIT SDK for Python](https://github.com/garmin/fit-python-sdk) |".format( os.path.basename(sys.argv[0]), sys.argv[1], end-start ) )
