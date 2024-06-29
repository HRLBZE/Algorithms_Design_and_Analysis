//#include <iostream>
//#include <algorithm>
//
//const int MAX_N = 501;
//
//int triangle[MAX_N][MAX_N];
//int dp[MAX_N][MAX_N];
//
//int main() {
//	int n;
//	std::cin >> n;
//
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j <= i; ++j) {
//			std::cin >> triangle[i][j];
//		}
//	}
//
//	for (int i = 0; i < n; ++i) {
//		dp[n - 1][i] = triangle[n - 1][i];
//	}
//
//	for (int i = n - 2; i >= 0; --i) {
//		for (int j = 0; j <= i; ++j) {
//			dp[i][j] = triangle[i][j] + std::max(dp[i + 1][j], dp[i + 1][j + 1]);
//		}
//	}
//
//	std::cout << dp[0][0] << std::endl;
//
//	return 0;
//}