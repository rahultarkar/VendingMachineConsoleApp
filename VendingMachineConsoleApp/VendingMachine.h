#pragma once

using namespace std;

#ifndef VendingMachine_H
#define VendingMachine_H
class Slab;
class VendingMachine
{
	public:
		VendingMachine();
		VendingMachine(Slab*[]);
		~VendingMachine();
		void showSlabs();
	private:
		Slab* slabs[10];
};
#endif
