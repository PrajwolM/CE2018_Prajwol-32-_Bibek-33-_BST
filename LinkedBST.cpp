#include"LinkedBST.h"
#include<iostream>

using namespace std;

node::node ()
{
  data = 0;
  left = right = NULL;
}

node::node (int value)
{
  data = value;
  left = right = NULL;
}

node::~node ()
{
}


LinkedBST::LinkedBST ()
{
}

LinkedBST::~LinkedBST ()
{
}

void
LinkedBST::add (int data)
{
}
{
}

void
LinkedBST::add (int data)
{

void
LinkedBST::preorderTraversal ()
{
}

bool
LinkedBST::search (int data)
{
}


void
LinkedBST::add (node * root, int data)
{
  if (root->data == 0)
    {
      root->data = data;
    }
  else
    {
      if (data < root->data)
	{
	  if (!root->left)
	    {
	      node *newnode = new node (data);
	      root->left = newnode;
	    }
	  else
	    {
	      add (root->left, data);
	    }
	}
      else if (data > root->data)
	{
	  if (!root->right)
	    {
	      node *newnode = new node (data);
	      root->right = newnode;
	    }
	  else
	    {
	      add (root->right, data);
	    }
	}
    }
}

bool
LinkedBST::search (node * root, int targetKey)
{
  if (root->data == 0)
    {
      cout << "The Tree is empty" << endl;
    }
  else
    {
      node *p = new node ();
      p = root;
      while (p)
	{
	  if (targetKey > p->data)
	    {
	      p = p->right;
	    }
	  else if (targetKey < p->data)
	    {
	      p = p->left;
	    }
	  else if (targetKey == p->data)
	    {
	      cout << targetKey << " belongs to the tree" << endl;
	      return 1;

	    }
	  else
	    {
	      cout << targetKey << " doesn't belong to the tree" << endl;
	      return 0;
	    }
	}
    }
  cout << targetKey << " doesn't belong to the tree" << endl;
  return 0;
}


void
LinkedBST::preorderTraversal (node * root)
{
  if (!root)
    return;


  cout << root->data << "\t";


  preorderTraversal (root->left);


  preorderTraversal (root->right);
}

int LinkedBST::max(){
	node *p=new node();
        p=&root;
        while(p ->right !=0)
        		p= p->right;

	return p->data;


}

int
main ()
{
  LinkedBST s;

  s.add (&s.root, 12);
  s.add (&s.root, 15);
  s.add (&s.root, 49);
  s.add (&s.root, 56);
  s.add (&s.root, 77);
  s.add (&s.root, 8);
  cout << "Preorder Traversal of the binary search tree is" << endl;
  s.preorderTraversal (&s.root);
  cout << endl;


  int num;
  cout << "Enter a number to search in the tree" << endl;
  cin >> num;
  s.search (&s.root, num);
  cout<<s.max()<<"is the max value";
}
