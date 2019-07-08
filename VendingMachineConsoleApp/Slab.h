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
	private:
		Block* blocks[10];
		char id;
};
#endif
