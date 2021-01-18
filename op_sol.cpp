#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, k, s;
		cin >> n >> k >> s;
		// total = total number of chocolates needed to eat
		int total = k * s;
		// open_days = total number of days wherein the shop is open
		// (s / 7) -> how many sundays are there in 's' days
		int open_days = s - (s / 7);
		// check if the total number of chocolates needed to eat is greater than the
		// maximum number of chocolates we can buy
		// also, check if the remaining chocolates can help you survive in the 7th day
		// which is sunday (this condition is only if s >= 7 days)
		if ((total > n * open_days) || (s >= 7 && (n - k) * 6 < k)) {
			cout << -1;
		} else {
			// otherwise, divide the total number of chocolates needed to eat by 'n',
			// to get the number of times that we need to buy a box of chocolates
			int ans = total / n;
			// check if 'n' chocolates cannot cover up the whole total number of chocolates
			// add 1 to make it sufficient enough for the remaining days
			if (total % n != 0) {
				ans++;
			}
			cout << ans;
		}
		cout << '\n';
	}
	return 0; 
}
