#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

double squareRoot(int n){
    return pow(2.732, log(n)/2);
}

int main(){
    int n;
    cout << "Enter Number : ";
    cin >> n;
    double x = squareRoot(n);
    if(x - (int)x < 0.1) cout << (int)x;
    else cout << setprecision(5) << x;
    return 0;
}