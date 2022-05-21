#include <iostream>
using namespace std;
int pow(int m , int n){
    if(n==0){
        return 1;
    }
    else{
        return pow(m,n-1)*m;
    }
}
int main(){
  int   m = pow(2,9);
  cout<<m<<endl;
  return 0;

}