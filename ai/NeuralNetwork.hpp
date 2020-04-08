#pragma once

#include "NeuralNetworkKit.hpp"

/**
 * Нейронная сеть
 **/
class NeuralNetwork
{
private:
    /**
     * Слои нейронной сети
     **/
    std::vector<Layer> layers;
    /**
     * Количество слоев нейронной сети
     **/
    int quantityLayers;
    /**
     * Активационная функция
     **/
    ActivationFunction activationFunction;
public:
    NeuralNetwork(std::vector<Layer> layers, ActivationFunction activationFunction);
    /**
     * Запуск нейронной сети
     **/
    bool run(std::vector<float> coefficients);
};
