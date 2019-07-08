#pragma once
#include <iostream>

using namespace std;
#ifndef Slab_H
#define Slab_h
class Block;
class Slab
{
	public:
		Slab();
		Slab(char, Block*[]);
		~Slab();
		void showBlocks();
		Block* findBlockByName(string itemName);
	private:
		Block* blocks[3];
		char id;
		int count;
};
#endif
