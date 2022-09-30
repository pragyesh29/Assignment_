#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    if(n == 0){
        cout << "Error : Array size cannot be zero!\n";
        return 0;
    }
    int arr[n];
    for(int i = 0; i < n; i++){
        arr[i] = (rand() % 100 )+ 1;
        cout << arr[i] << " ";
    }
    cout << '\n';
    int minimum = arr[0], maximum = arr[0];
    
    for(int i = 0; i < n; i++){
        if(arr[i] > maximum) maximum = arr[i];
        if(arr[i] < minimum) minimum = arr[i];
    }
    cout << "Maximum element is : " << maximum << '\n';
    cout << "Minimum element is : " << minimum;
    return 0;
}