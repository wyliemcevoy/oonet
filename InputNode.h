#pragma once
#include "Node.h"
class InputNode : public Node
{
protected:
	double input;

public:
	void calculate() override;
	double getNetOut() override;
	double getNetIn() override;
	void addOutEdge(std::weak_ptr<Edge> outEdge) override;
	InputNode();
	void setInput(double input);
	~InputNode();
};

