#include "bits/stdc++.h"
using namespace std;

using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	while(T--) {
		int a[100], n, k, v;
		cin >> n >> k >> v;
		for(int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		ll sum = 0;
		for(int i = 0; i < n; ++i) {
			sum += a[i];
		}
		ll ans = (v * (n + k) - sum) / k;
		if(ans <= 0 || (v * (n + k) - sum) % k != 0) {
			cout << -1;
		}
		else cout << ans;
		cout << "\n";
	}
}
