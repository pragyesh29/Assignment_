#include<iostream>
#include<math.h>
using namespace std;

int fact(int n){
    unsigned int fact = 1;
    for(int i = 2; i <=n; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int x, n;
    cout << "Enter x : ";
    cin >> x;
    cout << "\nEnter n : ";
    cin >> n;
    double res = 0.0;
    int c = 1;
    for(int i = 0; i < n; i++, c+=2){
        res += (pow(-1, i) * (pow(x, c)/fact(c)));
    }
    cout << res;
    return 0;
}