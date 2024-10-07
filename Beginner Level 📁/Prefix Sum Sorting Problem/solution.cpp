#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define pb push_back
#define vi vector<int>
#define vl vector<long long int>
using namespace std;
 
void solve() {
    int n, q;
    cin >> n >> q;
    
    string a, b;
    cin >> a >> b;
    
    vector<vector<int>> prefixA(n + 1, vector<int>(26, 0));
    vector<vector<int>> prefixB(n + 1, vector<int>(26, 0));
    
 
    for (int i = 0; i < n; i++) {
        prefixA[i + 1] = prefixA[i];
        prefixA[i + 1][a[i] - 'a']++;
    }
 
    for (int i = 0; i < n; i++) {
        prefixB[i + 1] = prefixB[i];
        prefixB[i + 1][b[i] - 'a']++;
    }
    
    vector<pair<int, int>> arr(q);
    for (int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        arr[i] = {a, b};
    }
    
    for (int i = 0; i < q; i++) {
        int l = arr[i].first - 1;
        int r = arr[i].second;
        
        vector<int> m1(26, 0), m2(26, 0);
        
        for (int j = 0; j < 26; j++) {
            m1[j] = prefixA[r][j] - prefixA[l][j];
            m2[j] = prefixB[r][j] - prefixB[l][j];
        }
        
        int cnt = 0;
        for (int j = 0; j < 26; j++) {
            if (m1[j] > m2[j]) cnt += (m1[j] - m2[j]);
        }
        cout << cnt << endl;
    }
}
 
int main() {
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}