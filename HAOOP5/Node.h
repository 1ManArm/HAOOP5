#pragma once
#include <iostream>
#include <string>
#include <vector>

class Node {
private:
	long _data;
public:
	Node(long data);
	~Node();
	Node* next;
	Node* prev;

	long GetData();
};