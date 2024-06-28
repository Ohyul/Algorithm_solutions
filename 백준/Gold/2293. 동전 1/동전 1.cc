#include <iostream>
#include <algorithm>
using namespace std;

int n, k, ans, sum;
int arr[110], dp[10010];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); 
	cout.tie(0); 

	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	dp[0] = 1;
	for (int i = 0; i < n; i++) {
		for (int j = arr[i]; j <= k; j++) {
			dp[j] = dp[j] + dp[j - arr[i]];
		}
	}

	cout << dp[k];
}

