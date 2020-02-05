#ifndef BINARYTREE_h
#define BINARYTREE_h


class BST
{
	public:
		virtual void add (int data)=0;
	//	virtual void preorderTaversal()=0;
		virtual bool search(int data)=0;
};
#endif
