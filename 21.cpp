// Implement selection sort with time
#include<chrono>
#include<ctime>
#include<iostream>
#include<limits.h>
using namespace std;

void selectionSort(int* arr, int n){
    for(int i = 0; i < n; i++){
        int smal = INT_MAX, idx;
        for(int j = i; j < n; j++){
            if(arr[j] < smal){
                smal = arr[j];
                idx = j;
            } 
        }
        swap(arr[idx], arr[i]);
    }
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
    cout << "Original array : ";
    for(int i = 0; i < n; i++){
        arr[i] = rand() % 100 + 1;
        cout << arr[i] << " ";
    }

    auto start = std::chrono::system_clock::now();
    selectionSort(arr, n);
    auto finish = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed = finish - start;
    std::cout << "\nElapsed Time : " << elapsed.count() << " seconds";

    cout << "\nSorted Array : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}