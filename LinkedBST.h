#ifndef LINKEDBST_h
#define LINKEDBST_h
#include"BST.h"

class Node
{
	int data;
	Node* left;
	Node* right;
};

class LinkedBST:public BST
{
	private:
		Node* root;
    public:
    	LinkedBST();
    	~LinkedBST();
    	void preorderTaversal();
    	bool search(int data);
    	void add(Node* root,int data);
};
#endif
