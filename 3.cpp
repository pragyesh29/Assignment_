#include<iostream>
using namespace std;

int itrFibo(int n){
    if(n == 1) return 0;
    int a = 0, b = 1, sum = 1;
    for(int i = 3; i <= n; i++){
        sum = a + b;
        a = b;
        b = sum;
    }
    return sum;
}

int recursiveFibo(int n){
    if(n == 1) return 0;
    if(n == 2) return 1;
    return recursiveFibo(n - 1) + recursiveFibo(n - 2);
}

int main(){
    int n; cin >> n;
    if(n <= 0){
        cout << "Invalid Input";
        return 0;
    }else{
        cout << "Iterative method : " << itrFibo(n) << '\n';
        cout << "Recursive method : " << recursiveFibo(n);
    }
}