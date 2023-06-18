#include <iostream>
#include <string>
#include <vector>
#include "List.h"

int main() {
	setlocale(LC_ALL, "Russian");

	List list;
	list.AddHead(1000000);
	list.AddTail(2000000);
	list.AddTail(4000000);
	list.AddTail(500000);
	list.AddTail(200000);
	list.ShowListFromHead();
	std::cout << "\n\n";

	return 0;
}