#include <stdio.h>
#include <string.h>
#include <math.h>

#include <caml/alloc.h>
#include <caml/memory.h>
#include <caml/mlvalues.h>
#include <caml/bigarray.h>

void unsafe_update_float32(value arr, value index, value mul, value add) {
  float *data = Caml_ba_data_val(arr);
  data[Int_val(index)] = floor(data[Int_val(index)] * Double_val(mul) + Double_val(add));
}
