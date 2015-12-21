#include "stdafx.h"
#include "Edge.h"

Edge::Edge(weak_ptr<Perceptron> head, weak_ptr<Perceptron> tail) : head{head}, tail{tail}
{
}

Edge::~Edge()
{
}
