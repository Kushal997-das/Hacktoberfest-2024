/*
You are hunting for food with an initial stamina of (x), and after every (y) kilometers,
you find a food item that gives you additional stamina to run further. There are a total of (n) food items, 
where the i-th food item gives you (A[i]) stamina. Find the total distance you can run.
INPUTS :-
1. x: The initial stamina.
2. У: Distance between consecutive food items.
3. n: Number of food items.
4. A: Array of stamina values, where each A[i] represents the stamina obtained from the i-th food item.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y,n;
    cin >> x >> y >>n;
    int a[n];
    int T_dist=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(x>=y){
            x=x-y+a[i];
            T_dist+=y;
        }
    }
    T_dist+=x;
    cout << T_dist;
return 0;
}