#include <iostream>
using namespace std;

int BinarySearch(int arr[], int num, int start, int end) {

    int mid;
    if (start > end) {
        cout << "Number not found";
        return 0;
    } else {
        mid = (start + end) / 2;
        if (arr[mid] == num) {
            cout << "Number found at " << mid << " index \n";
            return 0;
        }
        if (num > arr[mid]) BinarySearch(arr, num, mid + 1, end);            
        BinarySearch(arr, num, start, mid - 1);
    }

}

int main() {

    int arr, num, n;
    cout << "Enter the size of an array \n";
    cin >> n;

    arr = new int[n];

    cout << "Enter the sorted values \n";

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter a value to be search \n";
    cin >> num;

    BinarySearch(arr, num, 0, n-1);

    return 0;
}