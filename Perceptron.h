#pragma once
#include <vector>
#include <memory>
#include "Edge.h"
using namespace std;

class Perceptron
{
private:
	vector<weak_ptr<Edge>> inputs;
	vector<weak_ptr<Edge>> outputs;
public:
	Perceptron();
	~Perceptron();
};

