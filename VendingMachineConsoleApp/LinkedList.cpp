#include "pch.h"
#include "LinkedList.h"
#include "Node.h"
#include "Item.h"


LinkedList::LinkedList()
{
}


LinkedList::~LinkedList()
{

}

void LinkedList::addNode(Item* data)
{
	Node* node = new Node;
	node->data = data;
	node->next = NULL;
	if (head == NULL) 
	{
		head = node;
	} 
	else
	{
		if (this->tail != NULL)
		{
			this->tail->next = node;
			this->tail = node;
		}
		else
		{
			this->tail = node;
		}
	}
}

void LinkedList::deleteNode(Item* data)
{
	Node* currentNode = this->head;
	Node* temp = NULL;
	while (currentNode->next != NULL)
	{
		if (currentNode->data == data) 
		{
			if (temp == NULL) 
			{
				this->head = currentNode->next;
			} else 
			{
				temp->next = currentNode->next;
			}
			if (currentNode == tail) 
			{
				tail = temp;
			}
			break;
		}
		temp = currentNode;
		currentNode = currentNode->next;
	}
}