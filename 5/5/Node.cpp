#include "Node.h"
#include "stdafx.h"
#include <iostream>

;

Node::Node(int n){
	data = n;
	//std::cout << data << "," << n << std::endl;
	Node *next = nullptr;
}

int Node::getData() 
{
	return data;
}
	


