#ifndef ARRAYBST_H
#define ARRAYBST_H 
#include "BST.h"
#define MAX_SIZE 1000

class ArrayBST:public BST
{
	public:
		ArrayBST();
		void add(int data);
		void PreorderTraversal();
		bool search(int data);
		int get_left_child(int index);
		int get_right_child(int index);
		int Min_ele()=0;
		int Max_ele()=0;
	private:
		int data[MAX_SIZE];
};
#endif
