//#include <iostream>
//#include <vector>
//#include <climits>
//
//int cross_max(int nums[], int left, int mid, int right) {
//	int leftSum = INT_MIN;
//	int rightSum = INT_MIN;
//	int sum = 0;
//	for (int i = mid; i >= left; --i) {
//		sum += nums[i];
//		if (sum > leftSum) {
//			leftSum = sum;
//		}
//	}
//	sum = 0;
//	for (int j = mid + 1; j <= right; ++j) {
//		sum += nums[j];
//		if (sum > rightSum) {
//			rightSum = sum;
//		}
//	}
//	return leftSum + rightSum;
//}
//
//int max_sum(int nums[], int left, int right) {
//	if (left == right) {
//		return nums[left];
//	}
//	int mid = left + (right - left) / 2;
//	int leftMax = max_sum(nums, left, mid);
//	int rightMax = max_sum(nums, mid + 1, right);
//	int crossMax = cross_max(nums, left, mid, right);
//	return std::max({ leftMax, rightMax, crossMax });
//}
//int max_array(int nums[], int i)
//{
//	return max_sum(nums, 0, i - 1);
//}
//int nums[10003] = { 0 };
//int main() {
//	int i = 0;
//	while (std::cin >> nums[i])
//	{
//		i++;
//		if (std::cin.get() == '\n')
//			break;
//	}
//	int maxSum = max_array(nums, i);
//	std::cout << "最大子数组和: " << maxSum << std::endl;
//	return 0;
//}


//#include<iostream>
//
//long long sum = 0;
//long long b = 0;
//int nums[10003] = { 0 };
//
//int main()
//{
//	int i = 0;
//	while (std::cin >> nums[i])
//	{
//		i++;
//		if (std::cin.get() == '\n')
//			break;
//	}
//	for (int j = 0; j < i; j++)
//	{
//		if (b < 0)
//			b = nums[j];
//		else
//			b += nums[j];
//		if (b > sum)
//			sum = b;
//	}
//	std::cout << "最大和为:" << sum << std::endl;
//}