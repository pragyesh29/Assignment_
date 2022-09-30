#include<iostream>
#include<math.h>
using namespace std;

long long fact(int n){
    long long f = 1;
    for(int i = 2; i <= n; i++) f *= i;
    return f;
}
void sine(float x, int n){
     int toggle = 0;
     float res = 0.0f;
     for(int i = 1; i <= n; i+=2){
        float nmr = pow(-1, toggle) * pow(x, i);
        float dmr = fact(i);
        if(toggle) toggle = 0;
        else toggle = 1;
        res += (nmr / dmr);
     }
     cout << res;
}

int main(){
    int n;
    float x;
    cout << "Enter x : ";
    cin >> x;
    cout << "Enter n : ";
    cin >> n;
    sine(x, n);
    return 0;
}