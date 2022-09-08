#include<iostream>
#include<set>
#include<math.h>
using namespace std;
int main(){
    int n;
    set<int> res;
    cout << "Enter number : ";
    cin >> n;
    int r = sqrt(n);
    cout << "Prime factors are : ";
    if(n % 2 == 0) res.emplace(2);
    while(n % 2 == 0){
        n /= 2;
    }
    for(int i = 3; i < r; i+=2){
        if(n % i == 0){
            n /= i;
            res.emplace(i);
        }
    }
    if(n > 1) res.emplace(n);
    for(int i: res) cout << i << " ";
    return 0;
}