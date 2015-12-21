#pragma once
#include <vector>
#include <initializer_list>
#include "Perceptron.h"

class DynamicNeuralNet
{
private:
	std::vector<std::vector<Perceptron>> net;
public:
	//DynamicNeuralNet();
	DynamicNeuralNet(std::initializer_list<int> list);
	~DynamicNeuralNet();
};

