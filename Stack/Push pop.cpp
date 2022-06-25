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
