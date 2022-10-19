#include<iostream>
using namespace std;

void inputMat(int m, int n, int* matone, int* mattwo){
}

void addMatrix(int r1, int c1, int r2, int c2, int* matone, int* mattwo){
    if(r1 != r2 or c1 != c2){
        cout << "For Matrix Addition Matrix must be sqare matrix of same dimentions\n";
    }else{
        cout << "Resultant Matrix : \n";
        for(int i = 0; i < r1; i++){
            for(int j = 0; j < c1; j++){
                cout << *((matone + i * c1) + j) + *((mattwo + i * c1) + j) << " ";
            }
            cout << '\n';
        }
    }
}

void printMat(int r1, int c1, int r2, int c2, int* matone, int* mattwo){
    cout << "First matrix : \n";
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            cout << *((matone + i * c1) + j) << " ";
        }
        cout << '\n';
    }
    cout << "Second matrix : \n";
    for(int i = 0; i < r2; i++){
        for(int j = 0; j < c2; j++){
            cout << *((mattwo + i * c2) + j) << " ";
        }
        cout << '\n';
    }
}

void multiplyMatrix(int r1, int c1, int r2, int c2, int* matone, int* mattwo){
    if(c1 != r1){
        cout << "Matrix multiplication not possible on the given matrix\n";
    }else{
        for(int i = 0; i < r1; i++){
            for(int j = 0; j < r2; j++){
            }
        }
    }
}

int main(){
    // int m, n;
    // cout << "Enter number of rows and columns : ";
    // cin >> m;
    // cout << "Enter number of columns : ";
    // cin >> n;
    int matone[3][3] = {{1, 2, 3}, {5, 10, 7}, {12, 11, 3}};
    int mattwo[3][3] = {{10, 2, 4}, {8, 6, 7}, {2, 1, 13}};
    // int mattwo[3][4] = {{9, 4, 3, 1}, {11, 12, 21, 4}, {4, 5, 12, 2}};
    printMat(3, 3, 3, 3, (int*)matone, (int*)mattwo);
    addMatrix(3, 3, 3, 3, (int*)matone, (int*)mattwo);
    multiplyMatrix(3, 3, 3, 3, (int*)matone, (int*)mattwo);
    return 0;
}