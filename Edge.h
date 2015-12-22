#pragma once
#include <memory>
#include <vector>

class Perceptron;

class Edge
{
protected:
	double weight;
	double gradient;
	std::weak_ptr<Perceptron> head;
	std::weak_ptr<Perceptron> tail;
public:
	Edge(std::weak_ptr<Perceptron> head, std::weak_ptr<Perceptron> tail);
	~Edge();

	double getWeight();
	double getGradient();
	void setWeight(double weight);
	void setGradient(double gradient);
};

