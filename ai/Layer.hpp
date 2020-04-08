#pragma once

#include <vector>

#include "../math/Vector.hpp"

/**
 * Слой нейронной сети
 **/
class Layer
{
private:
    /**
     * Количество нейронов в слое
     **/
    int neuronQuantity;
    /**
     * Веса нейронной сети
     **/
    std::vector<float> weights;
public:
    Layer(std::vector<float> weights);
    /**
     * Вычисление значений слоя
     **/
    std::vector<float> calculate(std::vector<float> coefficients);
};
