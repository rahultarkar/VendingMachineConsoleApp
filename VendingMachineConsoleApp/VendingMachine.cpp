#include "pch.h"
#include "VendingMachine.h"
#include "Slab.h"
#include <iostream>
VendingMachine::VendingMachine()
{
}

VendingMachine::VendingMachine(Slab* slabs[]) 
{
	for (int i = 0; i < 10; i++) 
	{
		if (slabs[i] != NULL)
			this->slabs[i] = slabs[i];
	}
}

VendingMachine::~VendingMachine()
{
}

void VendingMachine::showSlabs()
{
	std::cout << "Vending Machine:" << endl;
	for (int i = 0; i < 10; i++) 
	{
		if (this->slabs[i] != NULL)
		{
			this->slabs[i]->showBlocks();
		}
	}
}