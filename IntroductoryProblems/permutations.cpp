#include<bits/stdc++.h>


using namespace std;

void print(int n){
    cout << n << " ";
    if(n != 1 &&  n != 2) return print(n-2);
}

int main(){
    int n;
    cin >> n;
    if (n == 1){
        cout << n;
        return 0;
    }
    if (n < 4){
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    print(n-1);
    print(n);

    return 0;
}