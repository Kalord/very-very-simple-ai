#include "NeuralNetwork.hpp"

NeuralNetwork(std::vector<Layer> layers, ActivationFunction activationFunction) :
layers(layers), quantityLayers(layers.size()), activationFunction(activationFunction)
{

}

/**
 * Запуск нейронной сети
 **/
bool NeuralNetwork::run(std::vector<float> coefficients)
{
    for(int i = 0; i < this->quantityLayers; i++)
    {
        coefficients = this->layers[i].calculate(coefficients);
    }

    float result = math::Vector::sum<float>(coefficients);
    return this->activationFunction(result);
}
