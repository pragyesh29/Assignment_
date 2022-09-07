#include<iostream>
using namespace std;

int gcd(int n, int m){
    if(n == 0) return m;
    if(m == 0) return n;
    if(n == m) return n;
    return gcd(m, n % m );
}

int main(){
    int n, m;
    cout << "Enter first number : ";
    cin >> n;
    cout << "Enter second number : ";
    cin >> m;
    cout << "GCD is : " << gcd(max(n, m), min(n, m));
    return 0;
}