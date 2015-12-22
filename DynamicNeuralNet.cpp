#include "stdafx.h"
#include "DynamicNeuralNet.h"
#include <iostream>

DynamicNeuralNet::DynamicNeuralNet(std::initializer_list <int> list) : net{list.size()}
{
	std::initializer_list<int>::iterator it;
	int index = 0;
	for (it = list.begin(); it != list.end(); it++)
	{
		int size = *it;
		net[index] = std::vector<std::shared_ptr<Perceptron>>(size);
		for (int j = 0; j < size; j++)
		{
			std::shared_ptr<Perceptron> pPointer(new Perceptron());
			net[index][j] = pPointer;
		}

		index++;
	}
}

ostream & operator<<(std::ostream & stream, const DynamicNeuralNet & self)
{
	string build;
	return stream << "Net (" << build << ")";
}

DynamicNeuralNet::~DynamicNeuralNet()
{
}
