#pragma once
#include <string>

using namespace std;

#ifndef VendingMachine_H
#define VendingMachine_H
class Slab;
class Block;
class Item;
class VendingMachine
{
	public:
		VendingMachine();
		VendingMachine(Slab*[]);
		~VendingMachine();
		void showSlabs();
		bool validatePurchase(string, double);
	private:
		Slab* slabs[5];
		int count;
};
#endif
