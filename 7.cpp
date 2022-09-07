#include<iostream>
using namespace std;
int main(){
    int n, s = 0;
    cout << "Enter number : ";
    cin >> n;
    while(n){
        int r = n % 10;
        s = s * 10 + r;
        n /= 10;
    }
    cout << "Reversed number is : " << s;
    return 0;
}