#pragma once

using namespace std;
#ifndef Node_H
#define Node_H
class Item;
class Node
{
	public:
		Node();
		~Node();
		Item* data;
		Node* next;
};
#endif
