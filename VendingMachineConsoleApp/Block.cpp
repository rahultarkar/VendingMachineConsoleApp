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
	std::cout << itemName + ", Price : " + std::to_string(unitPrice) + ", Quantity : " + std::to_string(stack->getSize());
}