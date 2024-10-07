#include<bits/stdc++.h>
#include<vector>

long long maximumTotalSum(vector<int> maximumHeight) {
    map<int,int>m;
    sort(maximumHeight.begin(),maximumHeight.end());
    long long sum=0;
    for (int i=maximumHeight.size()-1;i>=0;i--)
    {
        if (m[maximumHeight[i]])
        {
            maximumHeight[i]=maximumHeight[i+1]-1;
        }
        if (maximumHeight[i]<=0)
        {
            return -1;
        }
        m[maximumHeight[i]]=1;
        sum+=maximumHeight[i];
    }
    return sum;
}

int main(){
    vector<int> maximumHeight = {2, 3, 4, 3};
    long long ans = maximumTotalSum(maximumHeight);
    cout<<ans;

}
