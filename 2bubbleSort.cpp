#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n) { //O(n^2)

    for(int i=0; i<n-1; i++) {
        bool isSwap = false;
        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap) {//array is already sorted
            return;
        }
    }
}

void printarr(int arr[],int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {
    int n = 7;
    int arr[] = {1,2,3,5,6,7,9};
    bubbleSort(arr, n);
    printarr(arr, n);
    return 0;
}