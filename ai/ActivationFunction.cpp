#include "ActivationFunction.hpp"

ActivationFunction::ActivationFunction(float activationThreshold) : activationThreshold(activationThreshold)
{

}

bool ActivationFunction::check(float value)
{
    return value >= this->activationThreshold;
}
