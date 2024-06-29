//#include <iostream>
//#include <algorithm>
//
//const int MAX_N = 1000;
//
//int nums[MAX_N];
//int dp[MAX_N];
//int main()
//{
//	int N;
//	std::cin >> N;
//	for (int i = 0; i < N; ++i)
//	{
//		std::cin >> nums[i];
//	}
//	for (int i = 0; i < N; ++i) {
//		dp[i] = 1;
//	}
//	int maxLength = 1;
//	for (int i = 1; i < N; ++i) {
//		for (int j = 0; j < i; ++j) {
//			if (nums[j] < nums[i]) {
//				dp[i] = std::max(dp[i], dp[j] + 1);
//			}
//		}
//		maxLength = std::max(maxLength, dp[i]);
//	}
//	std::cout << maxLength << std::endl;
//}