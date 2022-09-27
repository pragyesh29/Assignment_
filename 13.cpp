#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int n){
    int c = 0;
    if(n % 2 == 0) c++;
    while(n % 2 == 0) n /= 2;
    for(int i = 3; i <= sqrt(n); i++){
        if(n % i == 0){
            c++;
            n /= i;
            i--;
        }
    }
    if(c > 0) return false;
    return true;
}

int main(){
    int l = 100, r = 200;
    cout << "primes between " << l << "and" << r << "are follows : \n";
    for(int i = l; i <= r; i++){
        if(isPrime(i)) cout << i << " ";
    }
    return 0;
}