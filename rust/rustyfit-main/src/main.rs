use std::{
    env,
    fs::File,
    io::{Cursor, Read},
    path::Path,
    time::Instant,
};

use embedded_io_adapters::std::FromStd;
use rustyfit::{Decoder, profile::typedef};

fn main() {
    let args: Vec<String> = env::args().collect();
    let filename = Path::new(&args[1]);

    let mut file = File::open(filename).unwrap();
    let mut buf = Vec::<u8>::new();
    file.read_to_end(&mut buf).unwrap();
    let reader = FromStd::new(Cursor::new(buf));

    let begin = Instant::now();

    let mut dec = Decoder::new();
    let fit = dec.decode(reader).unwrap().unwrap();

    let mut laps = 0usize;
    let mut records = 0usize;
    for mesg in fit.messages.iter() {
        match mesg.num {
            typedef::MesgNum::LAP => laps += 1,
            typedef::MesgNum::RECORD => records += 1,
            _ => {}
        }
    }

    println!("laps: {laps}");
    println!("records: {records}");

    println!(
        "| rust | rustyfit | {:?} | {:.3} | [rustyfit](https://github.com/muktihari/rustyfit)",
        filename.file_name().unwrap(),
        begin.elapsed().as_secs_f64()
    )
}
