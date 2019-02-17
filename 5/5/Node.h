#pragma once


class Node
{
public:
	int getData();
	Node *next;
	Node(int n);
private:
	int data;
};
