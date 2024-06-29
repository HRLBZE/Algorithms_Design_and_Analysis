//#include <iostream>
//
//const int MAXN = 20;
//const int MAXK = 20;
//
//int combinations[10000][MAXK];
//int current[MAXK];
//int combCount = 0;
//
//void generateCombinations(int n, int k, int start, int depth) {
//	if (depth == k) {
//		for (int i = 0; i < k; ++i) {
//			combinations[combCount][i] = current[i];
//		}
//		combCount++;
//		return;
//	}
//
//	for (int i = start; i <= n; ++i) {
//		current[depth] = i;
//		generateCombinations(n, k, i + 1, depth + 1);
//	}
//}
//
//int main() {
//	int n, k;
//	std::cin >> n >> k;
//	generateCombinations(n, k, 1, 0);
//	for (int i = 0; i < combCount; ++i) {
//		std::cout << "[";
//		for (int j = 0; j < k; ++j) {
//			if (j > 0) std::cout << ",";
//			std::cout << combinations[i][j];
//		}
//		std::cout << "]" << std::endl;
//	}
//	return 0;
//}
