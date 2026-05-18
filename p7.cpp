#include<iostream>
//revers an Array
using namespace std;

int main() {

    int arr[5] = {1,2,3,4,5};

    int start = 0;
    int end = 4;

    while(start < end) {

        // swap
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    // print reversed array
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}