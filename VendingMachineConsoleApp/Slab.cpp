#include "pch.h"
#include "Slab.h"
#include "Block.h"

Slab::Slab()
{
}

Slab::Slab(char id, Block* blocks[])
{
	this->id = id;
	for (int i = 0; i < 10; i++)
	{
		if (blocks[i] != NULL)
			this->blocks[i] = blocks[i];
	}
}
Slab::~Slab()
{
}

void Slab::showBlocks()
{
	for (int i = 0; i < 10; i++)
	{
		if (this->blocks[i] != NULL)
		{
			this->blocks[i]->showBlock();
		}
	}
	std::cout << endl;
}
