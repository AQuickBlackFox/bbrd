#ifndef BBRD_INCLUDE_BBRD_CONV_H
#define BBRD_INCLUDE_BBRD_CONV_H

#include<cstdint>

namespace bbrd{
  template<typename T, typename F>
  struct Conv{
  public:
    Conv(bbrd::Tensor<T> t, bbrd::Filter<F> f){}
  };
}

#endif
