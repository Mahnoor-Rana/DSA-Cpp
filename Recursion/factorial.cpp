#include<iostream>
using namespace std;
int fact(int n){
    if(n==1){
        return 1;
    
    }
    else{
        return fact(n-1)*n;
    }
}
int main(){
   int m = fact(5);
//if number given is 0 than you can directly return 1.
    cout<<m<<endl;
    return 0;
}
