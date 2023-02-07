#include<bits/stdc++.h>
#define lli long long int

using namespace std;
lli arr[2000000];

int main(){
    int n , q , a , b;
	cin >> n >> q;
    //construido o array de soma
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        arr[i] = arr[i] ^ arr[i-1];
    }
    //array = [1,2,3,4,5,6,7,8,9,10]
    // query = (3,7)
    // (1^2^3^4^5^6^7) ^ (1^2^3) = (4 ^5 ^6^7)

    for (int i = 0; i < q; i++){
        cin >> a >> b;
        cout << (arr[b] ^ arr[a-1]) << endl;
    }

}

