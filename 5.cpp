#include<iostream>
using namespace std;

double squareRoot(int n){
    int beg = 0, end = n, mid, precision = 3;
    double ans = 0.0, increment = 0.1;
    while(beg <= end){
        mid = (beg + end) / 2;
        int sqr = mid * mid;
        if(sqr == n){
            return mid;
        }else if(sqr > n){
            end = mid - 1;
        }else{
            ans = mid;
            beg = mid + 1;
        }
    }
    for(int i = 0; i < precision; i++){
        while(ans * ans <= n){
            ans += increment;
        }
        ans -= increment;
        increment /= 10;
    }
    return ans;
}

int main(){
    int n;
    cout << "Enter Number : ";
    cin >> n;
    cout << squareRoot(n);
    return 0;
}