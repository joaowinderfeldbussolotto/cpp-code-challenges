#include <bits/stdc++.h>
 
using namespace std;
    //  n   sum sum/n   sum     
    //  8   36  4.5     n/2 + 0.5
    //  7   28  4
    //  6   21  3.5
    //  5   15  3
    //  4   10  2.5
    //  3   6   2
    //  2   3   1.5
 
 
long long total_sum(long long n){
    long long total = 0;
    for(int i = 1; i <= n; i++){
        total+=i;
    }
    return total;
}
 
int main(){
    long long n, sum;
    cin >> n;
    int arr[n-1];
    sum  = 0;
 
    for (int i = 0; i < n-1; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    cout << total_sum(n) - sum;
    
}