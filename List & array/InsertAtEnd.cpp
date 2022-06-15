#include<iostream>
using namespace std;
int N=7, n=15;
bool isFull(){
    if(N==n){
        return true;
    }
    else{
        return false;
}
}
void insertAtEnd(int arr[]){
    if(isFull()){
        cout<<"Memory Already full"<<endl;
    }else{
        int value;
        cout<<"\nPlease Enter the value: ";
        cin>>value;
        arr[N]=value;
        N++;
    }
}
int main(){
 //int N = 9;
 //int n = 15;
   int arr[n] = {1,2,3,4,5,6,7};
   
   insertAtEnd(arr);
            for(int i=0;i<N;i++){
                 cout<<arr[i]<<",";
 }
return 0;
}
