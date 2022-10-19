#include<iostream>
#include<cstdlib>
#include<chrono>
#include<ctime>
using namespace std;


void insertionSort(int *arr, int n){
    for(int i = 0; i < n - 1; i++){
        int j = i + 1;
        while(arr[j] < arr[j - 1] and j > 0){
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }
}

void printArr(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << '\n';
}

int main(){
    int n;
    cout << "Enter N : ";
    cin >> n;
    if(n <= 0){
        cout << "Invaid Input!";
        return 0;
    }else if(n == 1){
        cout << "Already sorted!";
        return 0;
    }
    int arr[n];
    cout << "Original Array : ";

    for(int i = 0; i < n; i++){
        arr[i] = rand() % 100 + 1;
        cout << arr[i] << " ";
    }

    // chrono::time_point<chrono::system_clock> start, end;
    // start = chrono::system_clock::now();
    insertionSort(arr, n);
    // end = chrono::system_clock::now();
    // chrono::duration<float> elapsed_seconds = end - start;
    // cout << "Elapsed time using insertion sort: " << elapsed_seconds.count() << '\n';

    cout << "\nSorted array is : ";
    printArr(arr, n);

    
    return 0;
}