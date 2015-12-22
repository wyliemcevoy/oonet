#include "stdafx.h"
#include "Node.h"


Node::Node()
{
}

Node::Node(int outEdges): outputs{ std::vector<std::weak_ptr<Edge>>(outEdges) }
{
}
