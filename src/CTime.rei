open PosixTypes;

let time: unit => time_t;

let diffTime: (time_t, time_t) => float;