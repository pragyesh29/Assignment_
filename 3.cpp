#include<iostream>
#include<set>
using namespace std;

int itrFibo(int n){
    if(n == 1) return 0;
    int a = 0, b = 1, sum = 1;
    cout << a << " " << b << " ";
    for(int i = 3; i <= n; i++){
        sum = a + b;
        cout << sum << " ";
        a = b;
        b = sum;
    }
    return sum;
}

int recursiveFibo(int n){
    if(n == 1){
        return 0;
    }else if(n == 2){
        return 1;
    }else{
        int res = recursiveFibo(n - 1) + recursiveFibo(n - 2);
        return res;
    }
}

int main(){
    int n;
    std::cout << "Enter number : ";
    cin >> n;
    if(n <= 0){
        std::cout << "Invalid Input";
        return 0;
    }else{
        std::cout << "Iterative method : ";
        itrFibo(n);
        std::cout << '\n';
        std::cout << "Recursive method : " << recursiveFibo(n) << '\n';
    }

    std::cout << "Enter choice to get largest number possible to calculate for both approaches\n";
    std::cout << "1 for Iterative\n";
    std::cout << "2 for Recursive\n";
    std::cout << "3 to termiate the program";
    std::cout << "Enter choice : ";
    int ch; cin >> ch;
    int c = 1;

    switch(ch){
        case 1 :
            std::cout << "Largest n for which iterative approach works is...\n";
            std::cout << "Calculating...\n";
            while(true){
                if(itrFibo(c) < 0){
                    printf("\33[2K\r");
                    printf("\033[A\r");
                    printf("\33[2K\r");
                    std::cout << "Number is : " << c - 1 << '\n';
                    break;
                }
                std::cout << c++ << '\r';
            }
            break;
        case 2 :
            std::cout << "Largest n for which recursive approach works is...\n";
            std::cout << "Calculating... \n";
            while(true){
                if(recursiveFibo(c) < 0){
                    printf("\33[2K\r");
                    printf("\033[A\r");
                    printf("\33[2K\r");
                    std::cout << "Number is : " << c - 1 << '\n';
                    break;
                }
                std::cout << c++ << '\r';
            }
            break;
        case 3 : 
        default : return 0;
    }
    return 0;
}