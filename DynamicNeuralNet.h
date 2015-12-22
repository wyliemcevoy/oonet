#pragma once
#include <vector>
#include <initializer_list>
#include "Perceptron.h"

class DynamicNeuralNet
{
private:
	std::vector<std::vector<std::shared_ptr<Perceptron>>> net;
public:
	DynamicNeuralNet(std::initializer_list<int> list);
	~DynamicNeuralNet();
};

