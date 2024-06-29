//#include<iostream>
//using namespace std;
//
//int num_w[100] = { 0 };
//int num_x[100] = { 0 };
//
//int cw = 0;
//void backtrack(int i, int n, int c, int w_tmp, int sum)
//{
//	if (i > n)
//	{
//		if (w_tmp > cw)
//			cw = w_tmp;
//		return;
//	}
//	sum -= num_w[i - 1];
//	if (w_tmp + num_w[i - 1] <= c)
//	{
//		num_x[i - 1] = 1;
// 
//		w_tmp += num_w[i - 1];
//		backtrack(i + 1, n, c, w_tmp, sum);
//		w_tmp -= num_w[i - 1];
//	}
//	if (w_tmp + sum > cw)
//	{
//		num_x[i - 1] = 0;
//		backtrack(i + 1, n, c, w_tmp, sum);
//		sum += num_w[i];
//	}
//
//
//
//}
//
//int main()
//{
//	int i, n;
//	int c = 10;
//	int cen = 1;
//	int w_tmp = 0;
//	int sum = 0;
//	cin >> n;
//	for (i = 0; i < n; i++)
//	{
//		cin >> num_w[i];
//		sum += num_w[i];
//	}
//
//	backtrack(cen, n, c, w_tmp, sum);
//	for (i = 0; i < n; i++)
//		cout << num_x[i];
//
//
//}