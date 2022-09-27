#include<iostream>
#include<math.h>
using namespace std;

long long fact(int n){
    long long f = 1;
    for(int i = 2; i <= n; i++) f *= i;
    return f;
}

void sine(int x, int n){
}

int main(){
    int x, n;
    cout << "Enter x : ";
    cin >> x;
    cout << "Enter n : ";
    cin >> n;
    // if(n > 15){
    //     cout << "n must be strictly positive and less than or equal to 15";
    //     return 0;
    // }
    sine(x, n);
    return 0;
}