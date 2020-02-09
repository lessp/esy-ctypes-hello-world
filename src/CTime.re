open Ctypes;
open PosixTypes;
open Foreign;

let time' = foreign("time", ptr(time_t) @-> returning(time_t));

let time = () => time'(from_voidp(time_t, null));

let diffTime = foreign("difftime", time_t @-> time_t @-> returning(double));