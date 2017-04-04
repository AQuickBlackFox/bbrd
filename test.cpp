#include <iostream>
#include "./include/bbrd/data.h"
#include "./include/bbrd/conv.h"

int main(){
  bbrd::Tensor<float> t1(12,12,12,12);
  bbrd::Filter<float> f1(1,1,1,1);
  bbrd::Conv<float, float> c1(t1, f1);
}
