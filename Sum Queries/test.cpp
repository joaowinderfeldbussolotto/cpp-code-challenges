#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int NMAX = 200005;
int n, q;
ll a[NMAX], tree[NMAX];

// https://stackoverflow.com/questions/67743245/dynamic-range-sum-queries

ll sum(int k){
    ll s = 0;
    while(k>0){
        s+=tree[k];
        k-=k&-k;
    }
    return s;
}

void add(int k, ll x){
    while(k<=n){
        tree[k]+=x;
        k+=k&-k;
    }
}



int main(){
    cin>>n>>q;
    for(int i = 1; i<=n; i++){
        cin>>a[i];
        add(i, a[i]);
    }
    while(q--){
        int type; cin>>type;
        if(type==1){
            int k; 
            ll p;
            cin>>k>>p;
            add(k, p-a[k]);
            a[k] = p;

        }
        else{
            int l, r; cin>>l>>r;
            add(l, r - sum(l) + sum(r - 1));
            cout<<sum(r)-sum(l-1)<<'\n';
        }
    }
    return 0;
}