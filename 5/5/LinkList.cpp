#include "LinkList.h"
#include "stdafx.h"
#include <iostream>

LinkList::LinkList()
{
	Node *head = nullptr;
}

LinkList::~LinkList()
{
}

bool LinkList::insert(int n)
{
	if (head == nullptr)
	{
		head = new Node(n);
		return true;
	}
	else 
	{
		Node *newNode = new Node(n);
		if (head->data > n) 
		{
			newNode->next = head;
			head = newNode;
			return true;
		}
		else
		{
			Node *current = head;
			Node *prev = head;
			while (current && current->data < n)
			{
				prev = current;
				current = current->next;
			}
			prev->next = newNode;
			newNode->next = current;
			return true;
		}
	}
}

void LinkList::printAll()
{
	Node *current = head;
	while (current)
	{
		std::cout << current->data << std::endl;
		current = current->next;
	}
}