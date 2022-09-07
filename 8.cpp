#include<iostream>
#include<map>
using namespace std;

string toBinary(int n){
    string s = "";
    while(n){
        s = to_string(n % 2) + s;
        n /= 2;
    }
    return s;
}

string toOctal(int n){
    string s = "";
    while(n){
        s = to_string(n % 8) + s;
        n /= 8;
    }
    return s;
}
string toHex(int n){
    map<int, char> umap;
    int ch = 10;
    for(char c = 'A'; c <= 'F'; c++){
        umap[ch++] = c;
    }
    string s = "";
    while(n){
        int r = n % 16;
        if(r >= 10) s = umap[r] + s;
        else s = to_string(r) + s;
        n /= 16;
    }
    return s;
}

int main(){
    
    int n;
    cout << "Enter decimal number : ";
    cin >> n;
    cout << "Binary : " << toBinary(n) << '\n';
    cout << "Octal : " << toOctal(n) << '\n';
    cout << "Hexadecimal : " << toHex(n);
    return 0;
}