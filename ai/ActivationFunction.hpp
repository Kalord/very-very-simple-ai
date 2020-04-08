#pragma once

/**
 * Активационная функция
 **/
class ActivationFunction
{
private:
    /**
     * Активационный порог
     **/
    float activationThreshold;
public:
    ActivationFunction(float activationThreshold);

    bool check(float value);
};
