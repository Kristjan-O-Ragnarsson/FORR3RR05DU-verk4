// 5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "LList.h"
#include <iostream>


int main()
{	
	LList l;
	l.insert(2);
	l.insert(3);
	l.insert(1);
	l.printAll();
	std::cin.ignore();
	return 0;
}

