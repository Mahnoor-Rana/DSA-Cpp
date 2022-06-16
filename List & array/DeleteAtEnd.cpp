#include<iostream>
using namespace std;
int N=10,n= 15;
bool isFull(){
    if(N==n){
        return true;
    }else{
        return false;
    }
}
void DeleteAtEnd(int arr[]){
	if(isFull()){
		cout<<"Memory/List is full"<<endl;
	}
	else{
		int idx= 0 ;
		
	/*	cout<< "Enter value at index : "<<endl;
		cin>>value; */
		
		arr[N] = idx;
	}	N--;
	}
int main(){
	int arr[n] = {1,3,4,5,6,7,3,5};
	DeleteAtEnd(arr);
		for(int i=0;i<N;i++){
		cout<<arr[i]<<", "<<endl;
		
}
		
	return 0;
	
}

