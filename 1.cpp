#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout << "Enter both numbers : ";
    cin >> a >> b;
    a = a^b;
    b = a^b;
    a = b^a;
    cout << a << " " << b;
    return 0;
}