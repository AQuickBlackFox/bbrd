#ifndef BBRD_INCLUDE_BBRD_DATA_H
#define BBRD_INCLUDE_BBRD_DATA_H

namespace bbrd{
  template<typename T>
  struct Tensor{
  public:
    uint32_t n, c, h, w;
    Tensor(uint32_t N, uint32_t C, uint32_t H, uint32_t W) : n(N), c(C), h(H), w(W){}
  };

  template<typename T>
  struct Filter{
  public:
    uint32_t k, c, y, x;
    Filter(uint32_t K, uint32_t C, uint32_t Y, uint32_t X) : k(K), c(C), y(Y), x(X) {}
  };
}

#endif
