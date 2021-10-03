#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define MOD 30041975
long long dp[2001][2001];
long long fun(int i, int j) {
    if (j < 1)
       return 0;
    if (j >= i)
       return 0;
    if (i < 2)
       return 0;
    return dp[i][j];
}
main () 
{
     dp[2][1] = 2;
     for (int i = 3; i <= 2000; i++) {
         for (int j = 1; j <= i-1; j++) {
             dp[i][j] = ((j*fun(i-1,j))%MOD)+((2*fun(i-1,j-1))%MOD)+(((i-j)*fun(i-1,j-2))%MOD);
             dp[i][j] %= MOD;
             //cout << i << " " << j << " " << dp[i][j] << endl;
         }
     }
     for (int i = 3; i <= 2000; i++) {
         for (int j = i-1; j >= 1; j--) {
             dp[i][j] = (dp[i][j+1] + dp[i][j])%MOD;
         }
     }
     int t;
     scanf("%d",&t);
     while (t--) {
           int N, K;
           scanf("%d%d",&N,&K);
           //printf("%lld\n",dp[N][K+1]);
           cout << dp[N][K+1] << endl;
     }
     system("pause");
}
