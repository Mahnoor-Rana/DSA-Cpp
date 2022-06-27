#include <iostream>
using namespace std;
int e(int x, int y){
    static int s=1;
    if (y==0){
        return s;
    }
    else {
        s = 1 + x/y*1;
        return e(x,y-1);
            }
}
int main(){
  int  m = e(8,9);
  cout<<m<<endl;
  return 0;
}