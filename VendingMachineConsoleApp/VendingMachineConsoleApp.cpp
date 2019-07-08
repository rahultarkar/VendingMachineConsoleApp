// VendingMachineConsoleApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Item.h"
#include "Stack.h"
#include "Block.h"
#include "Slab.h"
#include "VendingMachine.h"
#include <iostream>

using namespace std;
void startVendingMachine()
{
	Slab* slabs[5];
	for (int i = 0; i < 5; i++)
	{
		Block* blocks[5];
		for (int j = 0; j < 5; j++)
		{
			blocks[j] = new Block();
			for (int k = 0; k < 10; k++) 
			{				
				blocks[j]->addItem(new Item("Item" + std::to_string(j)  + " " + std::to_string(k), 12.0));
			}
			blocks[j]->setItemName("Item " + std::to_string(j));
			blocks[j]->setUnitPrice(12.0);
		}
		slabs[i] = new Slab('A', blocks);
	}
	VendingMachine machine(slabs);
	machine.showSlabs();
}
int main()
{
	startVendingMachine();
	return 0;
}
