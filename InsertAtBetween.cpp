#include<iostream>
using namespace std;
int N , n;
bool isFull(){
    if(N==n){
        return true;
    }
    else{
        return false;
}
}
void insertAtStart(int arr[]){
    if (isFull()){
        cout<<"List is already filled! "<<endl;
    }
    else{
        int idx =0; 
		int value;
        cout<<"Enter value of index "<<idx<<" "<<endl;
        cin>>value;
        for(int i=N;i>idx;i--){
            arr[i] = arr[i-1];
        }
            arr[idx] = value;
            N++;
    }
}
int main(){
 int N = 0;
 n = 15;
 if(n>=10){
   int arr[n] = {1,1,2,3,4,5,6,7,5,3,2,5,7,3};
   for (int i=0;i<n;i++){
     if (arr[1]!=0){
         N++;
            continue;
            }
     break;
   }
   insertAtStart(arr);
            for(int i=0;i<N;i++){
                 cout<<arr[i]<<",";
 }
 
}
return 0;
}
