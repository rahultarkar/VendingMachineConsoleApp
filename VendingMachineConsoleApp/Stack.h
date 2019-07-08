#pragma once

using namespace std;
#ifndef Stack_H
#define Stack_H
class Item;
class LinkedList;
class Node;
class Stack
{
	public:
		Stack();
		~Stack();
		void push(Item*);
		Item* pop();
		bool isEmpty();
		int getSize();
	private:
		LinkedList* list;
		int count;
};

#endif