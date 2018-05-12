[@bs.get_index] external get : ('a, int) => 'b = "";

[@bs.set_index] external set : ('a, int, 'b) => unit = "";

let unsafe_update_float32 = (arr, i, ~mul, ~add) =>
  set(arr, i, floor(get(arr, i) *. mul +. add));
