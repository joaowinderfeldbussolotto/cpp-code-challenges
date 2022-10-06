#include<bits/stdc++.h>


using namespace std;

int main(){
    long long n, moves = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if(i > 0 && arr[i-1] > arr[i]){
            moves += arr[i-1] - arr[i];
            arr[i] = arr[i-1];
        }
            
    }
    cout << moves  << endl;
    return 0;
}