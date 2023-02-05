#include<bits/stdc++.h>

/*
[0,1,1,2,3,4,5,6]
[1,1,1,4,8,..]

*/
using namespace std;

int main(){
    int n;
    cin >> n;
    int mod = 1e9 + 7;
 
    vector<int> saved = vector<int>(n + 1);
    int dices = 6;
    saved[0] = 1;
    for (int i = 1; i < n + 1; i++) {
        for (int dice = 1; dice <= dices; dice++) {
            if (dice > i) continue;
            saved[i] = (saved[i] + saved[i - dice]) % mod;
        }
    }
    cout << saved[n];
 
    return 0;
}