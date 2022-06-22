#include<iostream>
using namespace std;
int N=10,n= 15;
bool isEmpty(){
    if(N==0){
	  return true;
}   else{
     return false;
 }
}
void SearchOnce(int arr[]){
	if(isEmpty()){
		cout<<"List is empty! "<<endl;
	}
	else{  
		int num;
		cout<<"Enter a number to search in Array"<<endl;
		cin>>num;
		for(int i=0;i<=num;i++){
			if(arr[i]== num){
				cout<<"Elements found at index "<<i;
				break;
			}
	        	
			else{
				cout<<"Element not present in array!!!"<<endl;
			}
			
		}
}}
int main(){
	int arr[n] = {1,3,4,5,6,7,3,5,7,6};
  SearchOnce(arr);
	

		
	return 0;
	
}

