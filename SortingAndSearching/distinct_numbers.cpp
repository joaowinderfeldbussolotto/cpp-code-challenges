#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr.begin(), arr.end());
	int ans = 1;
	for (int i = 1; i < n; i++) {
		/*
		 * if the current number is different from the previous
		 * it is a distinct number so we add 1 to the answer
		 */
        if(arr[i] != arr[i - 1]) ans++;
	}
	cout << ans << endl;
	return 0;
}