// Implement quick sort with time
#include<chrono>
#include<iostream>
#include<cstdlib>
using namespace std;

void quickSort(int n, int* arr){
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
    for(int i = 0; i < n; i++){
        arr[i] = rand() % 100 + 1;
        cout << arr[i] << " ";
    }
    cout << '\n';
    quickSort(n, arr);
    return 0;
}