#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> dp;
    bool solve(string &s, string &p, int n, int m, int i, int j){
        if (i >= n && j >= m) return true;
        if (j >= m) return false;
        if (i >= n) {
            for (int it=j; it<m; it++){
                if (p[it] != '*') return false;
            }
            return true;
        }

        if (dp[i][j] != -1) return dp[i][j];

        if (s[i] == p[j]){
            return dp[i][j] = solve(s, p, n, m, i+1, j+1);
        }
        else {
            if (p[j] == '*'){
                bool res = false;
                for (int it=0; it<=n-i; it++){
                    res = res | solve(s, p, n, m, i+it, j+1);
                }
                // res = solve(s, p, n, m, n, j+1);
                return dp[i][j] = res;
                // return dp[][] = true;
            }
            else if (p[j] == '?') return dp[i][j] = solve(s, p, n, m, i+1, j+1);
            else {
                return dp[i][j] = false;
            }
        }
    }
    bool isMatch(string &s, string &p){
        dp.assign(s.length()+2, vector<int> (p.length()+2, -1));
        return solve(s, p, s.length(), p.length(), 0, 0);
    }
};

int main(){
    string s;
    cin>>s;

    string p;
    cin>>p;

    Solution sol;
    if (sol.isMatch(s, p)){
        cout<<"True"<<endl;
    }
    else {
        cout<<"False"<<endl;
    }
    return 0;
}
