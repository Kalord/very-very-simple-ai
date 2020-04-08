#pragma once

#include <vector>

namespace math
{

class Vector
{
public:
    /**
     * Умножение двух векторов размера 1xN,
     * Важно чтобы размер вектора one и two были равны N
     * result - аккамулятор, в котором будет результат вычислений
     **/
    template<typename T>
    void mul(
      std::vector<T>& one,
      std::vector<T>& two,
      std::vector<T>& result
    );
    /**
     * Сложение элементов вектора
     **/
    template<typename T>
    T sum(std::vector<T>& vector);
}

}
