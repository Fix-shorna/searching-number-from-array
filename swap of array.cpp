#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size: ";
    cin >> n;

    int arr[n];
    cout<<"Enter the elements : ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

     int a, b;
     cout<<"Enter 2 positions to swapping :";
    cin >> a >> b;

    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
    cout << "Array after swapping:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
