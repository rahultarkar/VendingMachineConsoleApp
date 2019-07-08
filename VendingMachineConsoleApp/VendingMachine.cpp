#include "pch.h"
#include "VendingMachine.h"
#include "Slab.h"
#include "Block.h"
#include "Item.h"
#include <iostream>
using namespace std;
VendingMachine::VendingMachine()
{
}

VendingMachine::VendingMachine(Slab* slabs[]) 
{
	count = 0;
	for (int i = 0; i < 5; i++) 
	{
		if (slabs[i] != nullptr)
		{
			this->slabs[i] = slabs[i];
			count++;
		}
	}
}

VendingMachine::~VendingMachine()
{
}

void VendingMachine::showSlabs()
{
	std::cout << "Vending Machine:" << endl;
	for (int i = 0; i < count; i++) 
	{
		if (this->slabs[i] != NULL)
		{
			this->slabs[i]->showBlocks();
		}
	}
}

bool VendingMachine::validatePurchase(string itemName, double amount)
{
	Block* block;
	for (int i = 0; i < 5; i++)
	{
		Slab* slab = this->slabs[i];
		block = slab->findBlockByName(itemName);
		if (block != NULL)
		{
			break;
		}
	}
	if (block == NULL)
	{
		std::cout << "Can not find the item.";
		return false;
	}
	else
	{
		if (block->getNumOfItems() <= 0) 
		{ 
			std::cout << "Item is not available in the machine." << endl;
			return false;
		}
		if (block->getUnitPrice() > amount)
		{
			std::cout << "You are short on amount." << endl;
			return false;
		}
	}
	Item* item = block->dispenseItem();
	std::cout << "Item " + item->getName() + " is sold." << endl;
	std::cout << "Your balance is : " + std::to_string(amount - item->getPrice()) << endl;
	return true;
}