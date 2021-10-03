#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int current_max_prod = arr[0];
    int current_min_prod = arr[0];
    int ans = arr[0];
    int prev_max_prod = arr[0];
    int prev_min_prod = arr[0];
    for (int i = 1; i < n; i++)
    {
        current_max_prod = max ({prev_max_prod * arr[i] , prev_min_prod * arr[i] , arr[i]} );
        current_min_prod = min ({prev_max_prod * arr[i] , prev_min_prod * arr[i] , arr[i]} );
        ans = max (ans , current_max_prod);
        prev_max_prod = current_max_prod;
        prev_min_prod = current_min_prod;
    }
    cout<<"The Maximum Product of subarray is "<<ans<<endl;    
    return 0;

}