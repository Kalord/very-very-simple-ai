#incude "Layer.hpp"

Layer::Layer(std::vector<float> weights) : weights(weights), neuronQuantity(weights.size())
{

}

/**
 * Вычисление значения слоя
 **/
std::vector<float> Layer::calculate(std::vector<float> coefficients)
{
    std::vector<float> result;
    math::Vector<float>::mul(this->weights, coefficients, result);

    return result;
}
