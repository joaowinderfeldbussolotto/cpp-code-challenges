#include<bits/stdc++.h>
using namespace std;

long long get_factorial(long long n){
    return n == 0 || n == 1 ? 1 : n*get_factorial(n-1);
}


int main(){
    int n;
    int zeros = 0;

    cin >> n;
    
    //Trailing zeros aparecem quando um número é multiplicado por 10 (2*5).
    // Contar quantas vezes aparece multiplos de 5;

    for(int i = 5; n/i > 0; i = i*5)
        zeros += n/i;

    cout << zeros << endl;
    return 0;
}