#ifndef ARRAYBST_H
#define ARRAYBST_H 
#include "BST.h"
#define MAX	_SIZE 1000

class ArrayBST:public BST
{
	public:
		void add(int data);
		void PreorderTraversal();
		bool search(int data);
	private:
		int Data[MAX_SIZE];
};
#endif
