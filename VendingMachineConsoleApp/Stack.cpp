#include "pch.h"
#include "Stack.h"
#include "LinkedList.h"
#include "Item.h"
#include "Node.h"


Stack::Stack()
{
	list = new LinkedList();
	count = 0;
}


Stack::~Stack()
{
}

void Stack::push(Item* item)
{
	this->list->addNode(item);
	count++;
}

Item* Stack::pop()
{
	Node* tail = list->getTail();
	Item* item = list->getTail()->data;
	this->list->deleteNode(item);
	count--;
	return item;
}

bool Stack::isEmpty()
{
	return list->getHead() == NULL;
}

int Stack::getSize()
{
	return this->count;
}