#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >>n>>k;   
        vector<int>a(n); 
        for (int i=0; i<n;i++) {
            cin>>a[i];
        }
        
        vector<int>sorted_a=a; 
        sort(sorted_a.begin(),sorted_a.end());
        
        if (k>=n/2) {
            cout<<"YES"<<endl;
        } else {
            bool possible=true;
            for (int i=0;i<n-k;i++) {
                if (a[i] != sorted_a[i]) {
                    possible = false;
                    break;
                }
            }
            if (possible) {
                cout<<"YES"<<endl;
            } else {
                cout<<"NO"<<endl;
            }
        }
    }
    
    return 0;
}
