#include<iostream>
using namespace std;
string encrypt(string s){
    int n = 0;
    for(int i = 0; i < 4; i++){
        int r = (s[i] - '0') + 7;
        n = n * 10 + (r % 10);
    }
    s = to_string(n);
    swap(s[0], s[2]);
    swap(s[1], s[3]);
    return s;
}

string decrypt(string s){
    int n = 0;
    swap(s[0], s[2]);
    swap(s[1], s[3]);
    for(int i = 0; i < 4; i++){
        if((s[i]-'0') >= 7) n = n * 10 + ((s[i] - '0') - 7);
        else{
            int r = 10 + ((s[i] - '0') - 7);
            n = n * 10 + r;
        }
    }
    s = to_string(n);
    return s;
}

int main(){
    string s;
    cout << "Enter number : ";
    cin >> s;
    if(s.length() != 4){
        cout << "Invalid Input";
        return 0 ;
    }
    string t = encrypt(s);
    cout << "Encrypted Integer : " << t << '\n';
    cout << "Decrypted Integer : " << decrypt(t);
    return 0;
}