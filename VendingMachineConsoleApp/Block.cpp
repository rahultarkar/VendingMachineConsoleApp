#include "pch.h"
#include "Block.h"
#include "Stack.h"
#include "Item.h"

using namespace std;

Block::Block()
{
	stack = new Stack();
}


Block::~Block()
{
}

bool Block::isEmpty()
{
	return stack->isEmpty();
}

Item* Block::dispenseItem()
{
	return stack->pop();
}

void Block::addItem(Item* item)
{
	stack->push(item);
}

void Block::setItemName(string name)
{
	itemName = name;
}

void Block::setUnitPrice(double price)
{
	unitPrice = price;
}

void Block::showBlock()
{
	if (stack != nullptr)
		std::cout << itemName + ", P : " + std::to_string(std::lround(unitPrice)) + ", Qty : " + std::to_string(stack->getSize()) + " | ";
}

string Block::getItemName()
{
	return itemName;
}

int Block::getNumOfItems()
{
	return stack->getSize();
}

double Block::getUnitPrice()
{
	return unitPrice;
}