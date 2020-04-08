#include <iostream>

#include "ai/NeuralNetworkKit.hpp"
#include "ai/NeuralNetwork.hpp"

int main()
{
    Layer layer(std::vector<float>({0.2f, 0.9f, 0.1f}));
    ActivationFunction activationFunction(0.5f);

    NeuralNetwork neuralNetwork(std::vector<Layer>({layer}), activationFunction);

    std::vector<float> coefficients = {0, 1, 1};

    std::cout << neuralNetwork.run(coefficients) << std::endl;

    return 0;
}
