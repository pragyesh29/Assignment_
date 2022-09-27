#include<iostream>
using namespace std;

int itrFact(int n){
    int res = 1;
    for(int i = 2; i <= n; i++){
        res *= i;
    }
    return res;
}

int recursiveFact(int n){
    if(n == 1) return 1;
    return n * recursiveFact(n - 1);
}

int main(){
    int n;
    cout << "Enter number : ";
    cin >> n;
    if(n < 0){
        cout << "Invalid Input";
        return 0;
    }else{
        cout << "Iterative call : " << itrFact(n) << '\n';
        cout << "Recursive call : " << recursiveFact(n); 
        
    }
    return 0;
}