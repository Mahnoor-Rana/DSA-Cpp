// Write a program that have N numbers of stack

#include<iostream>
#include<stack>
using namespace std;
class NStack{
public	:
	int arr[];
	int top;
	int next;
	int n;// no of stacks
	int s; //  size of array
	int freespot;
	
	//top
	for(int i=0;i<n;i++){
			top[i] = -1;
		}
		
	//next 
	for(int i=0;i<s;i++){
		next[i] = i+1;
		}
		
	
			// Initialize your data structure.
	NStack(int N, int S){
		n = N;
		s = S;
	}
	

};
