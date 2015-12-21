#pragma once
#include "Perceptron.h"
#include <memory>
using namespace std;

class Edge
{
private:
	double weight;
	double gradient;
	weak_ptr<Perceptron> head;
	weak_ptr<Perceptron> tail;
public:
	Edge(weak_ptr<Perceptron> head, weak_ptr<Perceptron> tail);
	~Edge();
};

