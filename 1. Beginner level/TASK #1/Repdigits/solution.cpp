#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    const int MAX = 10;
    int n;
    cout<<"Emter value of n: ";
    cin>>n;
    int arr[MAX];
    int r = log10(n);
    int tmp = 0;
    for (int i = 0; i < r+1; i++) {
        tmp = tmp * 10 + 1;
    }
    cout<<"Number of repdigits upto n: ";
    cout<<(r * 9 + n / tmp)<<endl;
    
    return 0;
}
