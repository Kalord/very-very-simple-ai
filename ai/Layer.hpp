#pragma once

#include <vector>

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
    Layout(std::vector<float> weights);
    /**
     * Вычисление значения слоя
     **/
    std::vector<float> calculate(std::vector<float> coefficients);
};
