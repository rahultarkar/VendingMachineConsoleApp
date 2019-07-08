#pragma once
#include <iostream>

using namespace std;
#ifndef Block_H
#define Block_H
class Stack;
class Item;
class Block
{
	public:
		Block();
		~Block();
		bool isEmpty();
		Item* dispenseItem();
		void showBlock();
		void addItem(Item*);
		void setItemName(string);
		void setUnitPrice(double);
		string getItemName();
		int getNumOfItems();
		double getUnitPrice();
	private:
		Stack* stack;
		string itemName;
		double unitPrice;
};
#endif

