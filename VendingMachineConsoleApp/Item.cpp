#include "pch.h"
#include "Item.h"


Item::Item()
{
}

Item::Item(string name, double price)
{
	this->name = name;
	this->price = price;
}

string Item::getName()
{
	return name;
}

double Item::getPrice()
{
	return price;
}

void Item::setName(string name)
{
	this->name = name;
}

void Item::setPrice(double price)
{
	this->price = price;
}

Item::~Item()
{
}
