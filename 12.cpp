#include<iostream>
using namespace std;

// helper function to convert decimal to binary using bitwise
string to_binary(int n){
    string res = "";
    while(n){
        if(n & 1) res = "0" + res;
        else res = "1" + res;
        n = n >> 1;
    }
    return res;
}

int main(){
    int a, x;
    cout << "Enter base a : ";
    cin >> a;
    cout << "Enter power x : ";
    cin >> x;
    
    long long res = 0, curr = a;
    string s = to_binary(x);
    for(int i = 0; i < s.length(); i++){
        if(i == 0){
            if(s[i] == '1') res = a;
            else res = 1;
        }else{
            curr *= curr;
            if(s[i] == '1') res *= curr;
        }
    }
    cout << "pow(a, x) = " << res;
    return 0;
}