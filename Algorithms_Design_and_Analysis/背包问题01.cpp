//#include <iostream>
//#include <algorithm>
//
//int vi[1001];
//int wi[1001];
//int dp[1001][1001];
//
//int main() {
//    int N, V;
//    std::cin >> N >> V;
//
//    for (int i = 1; i <= N; ++i) {
//        std::cin >> vi[i] >> wi[i];
//    }
//
//    for (int i = 0; i <= N; ++i) {
//        for (int j = 0; j <= V; ++j) {
//            dp[i][j] = 0;
//        }
//    }
//
//    for (int i = 1; i <= N; ++i) {
//        for (int j = 0; j <= V; ++j) {
//            if (j >= vi[i]) {
//                dp[i][j] = std::max(dp[i - 1][j], dp[i - 1][j - vi[i]] + wi[i]);
//            }
//            else {
//                dp[i][j] = dp[i - 1][j];
//            }
//        }
//    }
//
//    std::cout << dp[N][V] << std::endl;
//
//    return 0;
//}