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
		Block* blocks[3];
		for (int j = 0; j < 3; j++)
		{
			blocks[j] = new Block();
			for (int k = 0; k < 5; k++) 
			{				
				blocks[j]->addItem(new Item("Item" + std::to_string(j)  + " " + std::to_string(k), 12.0));
			}
			blocks[j]->setItemName("Item" + std::to_string(j) + std::to_string(i));
			blocks[j]->setUnitPrice(12.0);
		}
		slabs[i] = new Slab('A', blocks);
	}
	VendingMachine machine(slabs);	
	bool continueApp = true;
	while (continueApp)
	{
		machine.showSlabs();
		string item;
		string amount;
		char cnt;
		std::cout << "Enter the item : " ;
		std::cin >> item;
		std::cout << endl;
		std::cout << "Enter the amount : ";
		std::cin >> amount;
		double _amount = std::stod(amount);
		std::cout << endl;
		if (machine.validatePurchase(item, _amount))
		{
			std::cout << "Do you want to continue? (y/n)" << endl;
			std::cin >> cnt;
			continueApp = cnt == 'y' || cnt == 'Y';
		}
	}

}
int main()
{
	startVendingMachine();
	return 0;
}
