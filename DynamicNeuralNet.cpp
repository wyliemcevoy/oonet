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
		if (size > 0) {
			net[index] = std::vector<std::shared_ptr<Perceptron>>(size);
			for (int j = 0; j < size; j++)
			{
				std::shared_ptr<Perceptron> pPointer(new Perceptron());
				net[index][j] = pPointer;
			}
		}
		index++;
	}
}

ostream & operator<<(std::ostream & stream, const DynamicNeuralNet & self)
{
	string build = "Net {";
	for (int i = 0; i < self.net.size(); i++)
	{
		build += "(";
		for (int j = 0; j < self.net[i].size(); j++)
		{
			build += "0";
			if (j != self.net[i].size()) {
				build += ",";
			}
		}
		build += ")";
	}
	build += "}";
	return stream <<  build;
}

DynamicNeuralNet::~DynamicNeuralNet()
{
}
