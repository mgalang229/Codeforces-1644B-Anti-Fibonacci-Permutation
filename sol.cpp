#include <bits/stdc++.h>

using namespace std;

void test_case() {
	int n;
	cin >> n;
	vector<int> vec(n);
	for(int i = 0; i < n; i++) {
		vec[i] = n - i;
	}
	//4 3 2 1
	//3 4 2 1
	//3 2 4 1
	//3 2 1 4
	for(int i = 0; i < n; i++) {
		for(auto& x : vec) {
			cout << x << " ";
		}
		cout << "\n";
		if(i + 1 < n) {
			swap(vec[i], vec[i+1]);
		}
		for(int j = 0; j + 2 < n; j++) {
			if(vec[j] + vec[j+1] == vec[j+2]) {
				swap(vec[j], vec[j+2]);
				break;
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T = 1;
	cin >> T;
	for(int tc = 0; tc < T; tc++) {
		test_case();
	}
}
