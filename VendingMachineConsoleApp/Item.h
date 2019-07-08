#pragma once

#include <iostream>
#include <string>

using namespace std;

#ifndef Item_H
#define Item_H
class Item
{
	public:
		Item();
		Item(string, double);
		~Item();

		//Accessor function
		string getName();
		double getPrice();
		//
		void setName(string);
		void setPrice(double);
	private:
		string name;
		double price;	
};
#endif