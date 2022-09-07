#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main(){
    int n;
    vector<int> res;
    cout << "Enter number : ";
    cin >> n;
    cout << "Prime factors are : ";
    if(n % 2 == 0) res.push_back(2);
    while(n % 2 == 0){
        n /= 2;
    }
    for(int i = 3; i < sqrt(n); i+=2){
        if(n % 3 == 0) res.push_back(i);
    }
    for(int i: res) cout << i << " ";
    return 0;
}