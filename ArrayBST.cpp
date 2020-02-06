#include <iostream>
#include "ArrayBST.h"
using namespace std;
ArrayBST::ArrayBST(){
	for(int i=0;i<MAX-SIZE;i++){
		this ->data[i]=0;
	}
}
void ArrayBST::add(int data){
	if(this->data[0]==0){
		data[1]=data;
	}
	else{
		for(int i=1;i<=MAXSIZE; ){
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
void ArrayBST::preorderTaversal(){
	
}
bool ArrayBST::search(int data){
	int current_index=1;
	while(current_index<=MAXSIZE){
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

