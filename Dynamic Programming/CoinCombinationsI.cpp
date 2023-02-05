#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
const int MOD = 1e9 + 7; 
 

 
int main(){
 
    int n, x; cin >> n >> x; 
    int ar[n]; 
 
    for (int i = 0; i < n; i++) cin >> ar[i]; 
 
    ll dp[x + 1]; 
 
    for (int i = 0; i <= x; i++) dp[i] = 0; 
    
    dp[0] = 1; 
 
    for (int i = 1; i <= x; i++){
        for (int j = 0; j < n; j++){
            if (i - ar[j] >= 0){
                dp[i] += dp[i - ar[j]]; 
                dp[i] %= MOD; 
            }
        }
    }
 
    cout << dp[x] << endl; 
 
}