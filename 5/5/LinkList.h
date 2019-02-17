#pragma once
#include "Node.h"


class LinkList
{
public:
	bool LinkList::insert(int n);
	void LinkList::printAll();
	LinkList();
	~LinkList();

private:
	Node *head;
};

