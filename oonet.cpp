// oonet.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include "DynamicNeuralNet.h"
#include <iostream>

int main()
{
	DynamicNeuralNet net = DynamicNeuralNet{ 1, 2, 3 };
    std:cout << net;
	// wait wait wait
	int wait;
	std::cin >> wait;
	return 0;
}
