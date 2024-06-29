//#include<iostream>
//using namespace std;
//
//int n = 8;
//int sum = 0;
//int x[] = { 0,1,2,3,4,5,6,7,8 };
//
//
//void swap(int* x, int* y)
//{
//	int c = *x;
//	*x = *y;
//	*y = c;
//}
//
//bool derm(int k)
//{
//	int j = 1;
//	for (; j < k; j++)
//	{
//		if (abs(k - j) == abs(x[k] - x[j]))
//			return false;
//	}
//	return true;
//}
//
//void backtrack(int t)
//{
//	if (t > n)
//	{
//		sum++;
//		return;
//	}
//	else
//	{
//		for (int i = t; i <= n; i++)
//		{
//			swap(&x[i], &x[t]);
//			if (derm(t))
//				backtrack(t + 1);
//			swap(&x[i], &x[t]);
//		}
//	}
//}
//
//
//int main()
//{
//	backtrack(1);
//	cout << sum;
//}