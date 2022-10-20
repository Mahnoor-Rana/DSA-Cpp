#include<iostream>
using namespace std;

int show(int *m){
    cout<<m;
}
int main(){
int x = 34; // here "x" is integer type variable
int a = show(&x);
cout<<a<<endl;
return 0;
}
