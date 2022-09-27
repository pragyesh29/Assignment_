#include<iostream>
#include<chrono>
#include<ctime>
#include<algorithm>
using namespace std;

int linearSearch(int x, int* arr, int n){
    for(int i = 0; i < n; i++){
        if(arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int binarySearch(int x, int* arr, int n){
    int beg = 0, end = n;
    while(beg <= end){
        int mid = (beg + end) / 2;
        if(arr[mid] == x){
            return mid;
        }else if(arr[mid] < x){
            beg = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return -1;
}

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        arr[i] = i + 1;
    }

    cout << "Number are...";
    for(int i : arr) cout << i << " ";
    cout << "\nEnter number to search : ";
    int x; cin >> x;

    chrono::time_point<chrono::system_clock> start, end;
    start = chrono::system_clock::now();
    cout << "Found at index : " << linearSearch(x, arr, n) << '\n';
    end = chrono::system_clock::now();
    chrono::duration<double> elapsed_seconds = end - start;
    cout << "Elapsed time using linear search: " << elapsed_seconds.count() << '\n';
    
    start = chrono::system_clock::now();
    cout << "Found at index : " << binarySearch(x, arr, n) << '\n';
    end = chrono::system_clock::now();
    elapsed_seconds = end - start;
    cout << "Elapsed time using binary search: " << elapsed_seconds.count() << '\n';
    
    return 0;
}