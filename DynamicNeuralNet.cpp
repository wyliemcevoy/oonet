#include "stdafx.h"
#include "DynamicNeuralNet.h"
#include <iostream>

DynamicNeuralNet::DynamicNeuralNet(std::initializer_list <int> list) : net{list.size() }
{
	std::initializer_list<int>::iterator it;
	int index = 0;
	for (it = list.begin(); it != list.end(); it++)
	{

		std::cout << *it << "\n";
	}
}

DynamicNeuralNet::~DynamicNeuralNet()
{
}
