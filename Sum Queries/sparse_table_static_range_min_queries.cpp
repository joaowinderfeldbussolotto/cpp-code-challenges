#include <bits/stdc++.h>
#define lli long long int
using namespace std;

const int MAX_N = 2000000;
const int LOG = 30;
lli a[MAX_N];
lli m[MAX_N][LOG]; 

lli query(lli L, lli R) { 
	lli length = R - L + 1;
	lli k = 0;
    // numero potencia de 2 imediatamente anterior
    while((1<<(k+1)) < length) k++;
	return min(m[L][k], m[R-(1<<k)+1][k]);
}

int main() {

	lli n, q;
	cin >> n >> q;
	
	for(lli i = 0; i < n; i++) {
		cin >> a[i];
		m[i][0] = a[i];
	}
	// build da sparse table, O(N*log(N))

	for(lli k = 1; k < LOG; k++) {
		for(lli i = 0; i + (1 << k) - 1 < n; i++) {
			m[i][k] = min(m[i][k-1], m[i+(1<<(k-1))][k-1]);
		}
	}
	
	for(lli i = 0; i < q; i++) {
		lli L, R;
		cin >> L >> R;
		cout << query(L-1, R-1) << "\n";
	}
}