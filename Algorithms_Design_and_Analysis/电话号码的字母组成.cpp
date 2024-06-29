#include <iostream>
#include <cstring> 

const int MAXN = 1000;
const int MAXL = 100;

// 映射数组，表示2-9对应的字母
char phoneMap[10][5] = {
	"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
};

char result[MAXN][MAXL];
char current[MAXL];
int resultCount = 0;


void backtrack(const char* digits, int index, int length) {
	if (index == length) {
		strcpy_s(result[resultCount], current);
		resultCount++;
		return;
	}
	int digit = digits[index] - '0';
	const char* letters = phoneMap[digit];
	for (int i = 0; letters[i] != '\0'; ++i) {
		current[index] = letters[i];
		backtrack(digits, index + 1, length);
	}
}

int main() {
	char digits[MAXL];
	std::cin >> digits;

	int length = strlen(digits);

	if (length == 0) {
		std::cout << "[]" << std::endl;
		return 0;
	}
	std::memset(current, 0, sizeof(current));
	backtrack(digits, 0, length);
	std::cout << "[";
	for (int i = 0; i < resultCount; ++i) {
		if (i > 0) std::cout << ",";
		std::cout << "\"" << result[i] << "\"";
	}
	std::cout << "]" << std::endl;
	return 0;
}
