// Stack implementation by using single array
#include<iostream>
#include<stack>
using namespace std;
class Stack{
	public:
	// properties
	int arr[10];// first method to initialize
	int n;//size of array
	int top;
	
	// Methods
//	Stack(int size){ 2nd method to stack  of array
	//	this-> n = n ;
	//	arr= new int[n];
	//	top = -1;
//	}
	
	void push(int ele){
		if(n-top >1){
			top++;
			arr[top] = ele;
			
		}
}
	void pop(){
		if(top>=0){
			top--;
		}
	}
	
	bool isempty(){
		if(top == -1){
			cout<<"Stack is empty"<<endl;
		}
		else{
			cout<<"Stack is not empty"<<endl;
		}
	}
	
	int peek(){
		if(top>=0){
			return arr[top];
		}
	}	
	
};
int main(){
	Stack s;
	
	s.push(32);
	s.push(43);
	s.push(89);
	
	cout<<"Top element is "<<s.peek()<<endl;
	s.pop();
	s.isempty();
	return 0;
}
