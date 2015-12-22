#pragma once
#include <vector>
#include <initializer_list>
#include "Perceptron.h"
#include <string>
#include <iostream>
using namespace std;

class DynamicNeuralNet
{
private:
	std::vector<std::vector<std::shared_ptr<Perceptron>>> net;
	friend std::ostream & operator<<(std::ostream &os, const DynamicNeuralNet& self);
public:
	DynamicNeuralNet(std::initializer_list<int> list);
	~DynamicNeuralNet();
};

