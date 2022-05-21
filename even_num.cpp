#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==1){
        return 2;
    }
    else{
        return 2*n + sum(n-1);
    }
}
   
int main()
{
    int r=sum(5);
cout<<r<<endl;
return 0;
}