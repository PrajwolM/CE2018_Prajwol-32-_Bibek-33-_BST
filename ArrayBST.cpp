#include <iostream>
#include "ArrayBST.h"
using namespace std;
ArrayBST::ArrayBST(){
	for(int i=0;i<MAX_SIZE;i++){
		this ->data[i]=0;
	}
}
void ArrayBST::add(int data){
	if(this->data[0]==0){
		data[1]=data;
	}
	else{
		for(int i=1;i<=MAX_SIZE; ){
			if(data<this->data[i]){
				i=2*i;
			}
			else{
				i=2*i+1;
			}
			if(this->data[i]==0){
				this->data[i]=data;
				break;
			}
		}
	}
	this->data[0]=this->data[0]+1;
	
}
int ArrayBST::get_left_child(int index){
    if(data[index]!=0 && (2*index)<=MAX_SIZE){
        return 2*index;
    }
    return -1;
}

int ArrayBST::get_right_child(int index){
    if(data[index]!=0 && (2*index+1)<=MAX_SIZE){
        return 2*index+1;
    }
    return -1;
}
void ArrayBST::preorderTaversal(){
	if(index>0 && data[index]!=0)
    {
        std::cout<<data[index]<<std::endl;
        preorderTraversal(get_left_child(index));
        preorderTraversal(get_right_child(index));
    }
	
}
bool ArrayBST::search(int data){
	int current_index=1;
	while(current_index<=MAX_SIZE){
	    if(data[current_index]==data){
	        return true;
	        break;
	    }
	    else if(data[current_index]>data){
	        current_index=2*current_index;
	    }
	    else if(data[current_index]<data){
	        current_index=2*current_index+1;
	    }
	}
	return false;

}
int Min_ele(){
    for(i=1;i=<MAX_SIZE;){
        if (data[2*i]==0){std::cout<<"MIN data ="<<data[i];
            break;}
        i*=2;
    }
    return data[i];
}

int main(){
	ArrayBST a;
	a.add(5);
	a.add(4);
	a.add(10);
	a.add(6);
	a.add(1);
	a.add(7);
	a.add(8);
	
	for(int i=0; i<MAX_SIZE;i++){
		std::cout<<a.data[i];
	}
	std::cout<<std::endl;
	
	a.preorderTraversal(10);
	
    if(a.search(6)){
        std::cout<<"6 present in BST"<<std::endl;
    }
    else{
        std::cout<<"6 not present in BST"<<std::endl;
    }
}

