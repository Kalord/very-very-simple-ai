#include <Vector.hpp>

/**
 * Умножение двух векторов размера 1xN,
 * Важно чтобы размер вектора one и two были равны N
 * result - аккамулятор, в котором будет результат вычислений
 **/
template<typename T>
void math::Vector::mul(
  std::vector<T>& one,
  std::vector<T>& two,
  std::vector<T>& result
)
{
    if(one.size() != two.size()) return;

    for(int i = 0; i < one.size(); i++)
    {
        result[i] = one[i] * two[i];
    }
}

/**
 * Сложение элементов вектора
 **/
template<typename T>
T sum(std::vector<T>& vector)
{
    T result;

    for(int i = 0; i < vector.size(); i++)
    {
        result += vector[i];
    }

    return result;
}
