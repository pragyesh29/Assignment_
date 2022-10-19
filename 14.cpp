#include<bits/stdc++.h>
using namespace std;

void subsequence(string original, string tmp, int index, vector<string> &arr){
    if(index >= original.size()){
        arr.push_back(tmp);
        return;
    }else{
        subsequence(original, tmp + original[index], index + 1, arr);
        subsequence(original, tmp, index + 1, arr);
    }
}

int main(){
    string x = "AGGTAB", y = "GXTXAYB";
    // o/p GTAB
    vector<string> arr1, arr2;
    subsequence(x, "", 0, arr1);
    subsequence(y, "", 0, arr2);
    
    set<string> uset;
    int cnt = 0;
    string res = "";
    for(string s: arr1) uset.emplace(s);
    for(string s: arr2){
        if(uset.count(s) and s.size() > cnt){
            cnt = s.size();
            res = s;
        }
    }
    cout << res;
    return 0;
}