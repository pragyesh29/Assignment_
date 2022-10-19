// Implement merge sort with time
#include<chrono>
#include<iostream>
#include<cstdlib>
using namespace std;

void merge(int arr[], int beg, int mid, int end){
    int m = mid - beg + 1;
    int n = end - mid;

    int localone[m], localtwo[n];
    for(int i = 0; i < m; i++) localone[i] = arr[beg + i];
    for(int i = 0; i < m; i++) localtwo[i] = arr[mid + 1 + i];

    int i = 0, j = 0, c = beg;
    while(i < m && j < n){
        if(localone[i] <= localtwo[j]){
            arr[c] = localone[i];
            i++; c++;
        }else{
            arr[c] = localtwo[j];
            j++; c++;
        }
    }

    while(i < m){
        arr[c] = localone[i];
        i++; c++;
    }
    while(j < n){
        arr[c] = localtwo[j];
        j++; c++;
    }
}

void mergeSort(int arr[], int beg, int end){
    int mid = (beg + end) / 2;
    if(beg >= end) return;
    mergeSort(arr, beg, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, beg, mid, end);
}

int main(){
    int n;
    cout << "Enter N : ";
    cin >> n;
    if(n <= 0){
        cout << "Invaid Input!";
        return 0;
    }
    int arr[n];
    cout << "Original : ";
    for(int i = 0; i < n; i++){
        arr[i] = rand() % 100 + (rand() % 10);
        cout << arr[i] << " ";
    }
    mergeSort(arr, 0, n - 1);
    cout << "\nSorted : ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}