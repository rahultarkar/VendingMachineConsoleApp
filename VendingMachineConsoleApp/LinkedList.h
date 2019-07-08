#pragma once
 
using namespace std;

#ifndef LinkedList_H
#define LinkedList_H
class Item;
class Node;
class LinkedList
{
	public:
		LinkedList();
		~LinkedList();

		void deleteNode(Item*);
		void addNode(Item*);
		Node* getHead()
		{
			return this->head;
		}

		Node* getTail()
		{
			return this->tail;
		}
	private:
		Node* head;
		Node* tail;
};

#endif