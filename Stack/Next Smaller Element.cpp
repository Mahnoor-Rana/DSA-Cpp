//Find the next smaller element in an array
#include <bits/stdc++.h>
#include<iostream>
#include<stack>
#define vi vector<int>
using namespace std;
// using vector because it is sequence containers representing arrays that can change in size
vector<int> NextSmallerEle(vector<int> &arr, int n){
	vector <int> a(n);
	stack <int> s;
	s.push(-1);
	// we started from left to right because of complexity o(n)
	for(int i=n-1;i>=0;i--){
		int current = arr[i];
		while(s.top()>=current){
			s.pop();
		}
	// now see the top element in stack
	a[i] = s.top();
	s.push(current);
	cout<<arr[i]<<endl;
		
	}
	return a;
}
int main(){
	int m;
	int size;
	 vector<int> v;
	 cout<<"Enter size of vector"<<endl;
	 cin>>size;
	 for(int i=0;i<size;i++){
     cout<<"Enter element"<<endl;
     cin>>m;
	 	v.push_back(m);
	 }
	 NextSmallerEle(v,4);
	 //cout for displaying value
	 return 0;
}
