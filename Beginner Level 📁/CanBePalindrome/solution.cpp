#include "bits/stdc++.h"
using namespace std;

int main(){
    string s;
    cin>>s;
    int cnt = 0;
    int done = 0;
    int l = 0;
    int r = s.length()-1;
    while(l<=r){
        if(s[l] == s[r]){
            l++;
            r--;
        }
        else if(cnt == 0){
            l++;
            cnt = 1;
        }
        else{
            cout<<"No cannot be made palindrome in less than equal to 1 operation"<<endl;
            done = 1;
            break;
        }
    }
    if(done == 0){
        cout<<"Yes can be made palindrome in less than equal to 1 operation"<<endl;
    }
}

//EXAMPLES
//abba
//Yes can be made palindrome in less than equal to 1 operation
//abacb
//No cannot be made palindrome in less than equal to 1 operation