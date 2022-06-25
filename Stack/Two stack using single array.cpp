// Write a program implement two Stack implementation by using single array
#include<iostream>
#include<stack>
using namespace std;
class TwoStack{
	public:
	// properties
	int arr[10];// first method to initialize
	int n;//size of array
	int top1;
	int top2;
	
	// Methods
//	Stack(int size){ 2nd method to stack  of array
	//	this-> n = n ;
	//	arr= new int[n];
	//	top = -1;
//	}
	
	void push1(int ele){
		if(top1-top2 >1){
			top1++;
			arr[top1] = ele;
			
		}
}

	void push2(int ele){
		if(top2-top1 >1){
			top2--;
			arr[top2] = ele;
			
		}
}

	int pop1(){
		if(top1>=0){
			int s = arr[top1];
			top1--;
			return s;
		}
	}
	
		int pop2(){
		if(top2<n){
			int s = arr[top2];
			top2++;
			return s;
		}
	}
};
int main(){
	TwoStack s;
	
	s.push1(32);
	s.push1(43);
	s.push2(33);
	s.push2(22);
	
	cout<<s.pop1()<<endl;
	cout<<s.pop2()<<endl;
	/* if you want to see the whole stack then define the function of peek 
	because it will give you the top element of the stack 1 or 2 array depending upon the situation*/
	return 0;
}
