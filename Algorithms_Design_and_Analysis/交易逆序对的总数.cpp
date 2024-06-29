//#include <iostream>
//#include <vector>
//
//
//int merge_count(int arr[], int left, int mid, int right) {
//	std::vector<int> temp(right - left + 1);
//	int i = left;
//	int j = mid + 1;
//	int k = 0;
//	int invCount = 0;
//	while (i <= mid && j <= right)
//	{
//		if (arr[i] <= arr[j])
//		{
//			temp[k++] = arr[i++];
//		}
//		else
//		{
//			temp[k++] = arr[j++];
//			invCount += (mid - i + 1);
//		}
//	}
//	while (i <= mid)
//	{
//		temp[k++] = arr[i++];
//	}
//	while (j <= right)
//	{
//		temp[k++] = arr[j++];
//	}
//	for (i = left; i <= right; i++)
//	{
//		arr[i] = temp[i - left];
//	}
//	return invCount;
//}
//
//int mergesort_count(int arr[], int left, int right)
//{
//	int invCount = 0;
//	if (left < right)
//	{
//		int mid = left + (right - left) / 2;
//		invCount += mergesort_count(arr, left, mid);
//		invCount += mergesort_count(arr, mid + 1, right);
//		invCount += merge_count(arr, left, mid, right);
//	}
//	return invCount;
//}
//
//int count_inversion(int record[], int i)
//{
//	return mergesort_count(record, 0, i - 1);
//}
//
//int main()
//{
//	int record[50002] = { 0 };
//	int i = 0;
//	while (std::cin >> record[i])
//	{
//		i++;
//		if (std::cin.get() == '\n') break;
//
//	}
//	int totalInversionPairs = count_inversion(record, i);
//	std::cout << "交易逆序对总数: " << totalInversionPairs << std::endl;
//
//	return 0;
//}
//
//
//
