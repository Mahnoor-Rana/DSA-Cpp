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
void DeleteAtBtw(int arr[]){
	if(isFull()){
		cout<<"Memory/List is full"<<endl;
	}
	else{
		int idx ;
		
		cout<< "Enter value at index : "<<endl;
		cin>>idx;
		for(int i=idx;i<=N;i++){
			arr[i] = arr[i+1];
		}
		arr[N] = 0;
		N++;
	}
}
int main(){
	int arr[n] = {1,3,4,5,6,7,3,5,7,6};
	DeleteAtBtw(arr);
		for(int i=0;i<N;i++){
		cout<<arr[i]<<", "<<endl;
		
}
		
	return 0;
	
}

