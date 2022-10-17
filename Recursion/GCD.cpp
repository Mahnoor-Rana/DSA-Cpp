// Greatest Common Divisor (GCD) Algorithms
#include<iostream>
using namespace std;

// Method 1 
// In this Method the function accept 2 parameters i.e. a and b. If both the parameters are 0, the function returns zero and if both the parameters are same, function returns a. If a is greater than b, the function recursively calls itself with the values a-b and b. If b is greater than a, the function recursively calls itself with the values a and b-a.
int gcd(int a, int b) {
   if (a == 0 || b == 0) return 0;
   if (a == b) return a;
   if (a > b) return gcd(a-b, b);
   return gcd(a, b-a);
}

// Method 2
// Another method of finding the GCD of two numbers 
// gcd2() is a recursive function which has two parameters i.e. a and b. If b is greater than 0, then a is returned to the main() function. Otherwise, the gcd() function recursively calls itself with the values b and a%b.
int gcd2(int a, int b) {
   if (b == 0) return a;
   return gcd(b, a % b);
}

main() {
   int a, b;
   cout<<"Enter two numbers for GCD\n";
   cin>>a>>b;
   cout<<"GCD of "<< a <<" and "<< b <<" is "<< gcd(a, b);
}