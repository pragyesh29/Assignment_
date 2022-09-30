#include<iostream>
#include<set>
using namespace std;
// 1 2 4 10 11 4 1 7 1 15
int main(){
    int n, c = 0;
    set<int> s;
    cout << "Enter n : ";
    cin >> n;
    if(n == 0){
        cout << "Error : Array size cannot be zero!\n";
        return 0;
    }
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        s.emplace(arr[i]);
    }

    int size = s.size();
    for(int i : s) arr[c++] = i;
    while(c < n){
        arr[c] = -1;
        c++;
    }
    for(int i : arr) cout << i << " ";
    return 0;
}

// O(n) + O(log n) + O(n)