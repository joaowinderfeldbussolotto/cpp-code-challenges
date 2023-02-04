#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<pair<int, int>> times;
	for (int i = 0; i < n; i++) {
		int start, end;
		cin >> start >> end;
		times.push_back({start, 1});
		times.push_back({end, -1});
	}

	sort(times.begin(), times.end());

	int current = 0;
	int max_costumers = 0;
	for (const pair<int, int>& t : times) {
		current += t.second;
		max_costumers = max(max_costumers, current);
	}

	cout << max_costumers << endl;
    return 0;

}
