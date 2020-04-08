#pragma once

#include <vector>

namespace math
{

template<typename T>
class Vector
{
public:
    /**
     * Умножение двух векторов размера 1xN,
     * Важно чтобы размер вектора one и two были равны N
     * result - аккамулятор, в котором будет результат вычислений
     **/
    static void mul(
      std::vector<T>& one,
      std::vector<T>& two,
      std::vector<T>& result
    )
    {
        if(one.size() != two.size()) return;

        for(int i = 0; i < one.size(); i++)
        {
            result.push_back(one[i] * two[i]);
        }
    }

    /**
     * Сложение элементов вектора
     **/
    static T sum(std::vector<T>& vector)
    {
        T result;

        for(int i = 0; i < vector.size(); i++)
        {
            result += vector[i];
        }

        return result;
    }
};

}
