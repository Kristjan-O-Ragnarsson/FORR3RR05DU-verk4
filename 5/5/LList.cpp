#include "LList.h"


#include "stdafx.h"
#include <iostream>

LList::LList()
{
	Node *head = nullptr;
}

bool LList::insert(int n)
{
	//std::cout << n << std::endl;
	if (head == nullptr)
	{
		head = new Node(n);
		//std::cout << head->data << std::endl;
		return true;
	}
	else
	{
		Node *newNode = new Node(n);
		if (head->getData() > n)
		{
			newNode->next = head;
			head = newNode;
			return true;
		}
		else
		{
			Node *current = head;
			Node *prev = head;
			while (current && current->getData() < n)
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

void LList::printAll()
{
	Node *current = head;
	std::cout << "[";
	while (current)
	{
		if (current->next == nullptr){
			std::cout << current->getData() << "]" << std::endl;
		}
		else 
		{
			std::cout << current->getData() << ",";
		}
		current = current->next;
	}
}