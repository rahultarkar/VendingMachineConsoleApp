#include "pch.h"
#include "Slab.h"
#include "Block.h"

Slab::Slab()
{
}

Slab::Slab(char id, Block* blocks[])
{
	count = 0;
	this->id = id;
	for (int i = 0; i < 3; i++)
	{
		if (blocks[i] != NULL)
		{
			this->blocks[i] = blocks[i];
			count++;
		}
	}
}
Slab::~Slab()
{
}

void Slab::showBlocks()
{
	for (int i = 0; i < count; i++)
	{		
		if (this->blocks[i] != NULL)
		{
			this->blocks[i]->showBlock();
		}
	}
	std::cout << endl;
}

Block* Slab::findBlockByName(string itemName)
{
	for (int i = 0; i < 3; i++) 
	{
		if (this->blocks[i]->getItemName() == itemName)
			return this->blocks[i];
	}
	return NULL;
}
