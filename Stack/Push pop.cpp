// Write basic push, pop, empty functions

#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack <int> s;
	// push operation 
	s.push(67);
	s.push(32);
	// pop operation
	s.pop();
	
	//empty function
	if(s.empty()){
		cout<<"stack is empty"<<endl;
	}
	else{
		return false;
	}
	return 0;
}

// The function of this code can be implemented manually as well ...
// It can be implemented as follows:

/*#include <iostream>
using namespace std;
int stack[100], n=100, top=-1;
void push(int val) 
	{
  	 if(top>=n-1)
  	 cout<<"Stack Overflow"<<endl;
  	 else 
   		{
      top++;
      stack[top]=val;
   		}
	}
void pop() {
   if(top<=-1)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< stack[top] <<endl;
      top--;
   }
}
void display() {
   if(top>=0) {
      cout<<"Stack elements are:"<<endl;
      for(int i=top; i>=0; i--)
      cout<<stack[i]<<" ";
      cout<<endl;
   } else
   cout<<"Stack is empty"<<endl;
}
int main() {
   int ch, val;
      do {
     		cout<<"Enter choice: "<<endl;
   			cout<<"1) Push in stack"<<endl;
  			cout<<"2) Pop from stack"<<endl;
   			cout<<"3) Display stack"<<endl;
   			cout<<"4) Exit"<<endl;
			cin>>ch;
      
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }
   while(ch!=4);
   return 0;
}*/
