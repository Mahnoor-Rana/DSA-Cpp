#include <iostream>
using namespace std;

int interpolationSearch(int arr[], int lo, int hi, int value){
	if (lo <= hi && value >= arr[lo] && value <= arr[hi]) {
		int pos;
		// Probing Formula
		pos = lo + (((double)(hi - lo) / (arr[hi] - arr[lo])) * (value - arr[lo]));
		
		if (arr[pos] == value)  return pos;
		// using recusrion if element is not found at probe position
		if(arr[pos] < value )   return interpolationSearch(arr, pos + 1, hi, value);
		return interpolationSearch(arr, lo, pos - 1, value);
	}
	return -1;
}

int main(){
	int size, el, index;
	//Array of items on which search will be conducted.
	int arr[] = {5, 6, 8, 9, 10, 11, 15, 18, 22, 30, 35};
	// size of array
	size = sizeof(arr) / sizeof(arr[0]);
	// element to be searched
	el = 22;
	
	cout<<"Searching el "<<el<<" in Array\n";
	// the function will return the index at which the el is found
	index = interpolationSearch(arr, 0, size - 1, el); 
	(index!=-1)?
		cout<< "Element found at index "<<index :
		cout<<"Element not Found";
}