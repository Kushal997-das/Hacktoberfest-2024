#include "bits/stdc++.h"
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long x = floor(sqrt(n));
    for(long long i = 1;i<=x;i++){
        cout<<(i*i)<<endl;
    }
}