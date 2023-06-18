#include "Node.h"

Node::Node(long data) : _data(data), next(nullptr), prev(nullptr) {}

Node::~Node(){
	std::cout << "Node deleted.\n";
}

long Node::GetData(){
	return _data;
}
