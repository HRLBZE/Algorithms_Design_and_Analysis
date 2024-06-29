//#include<iostream>
//using namespace std;
//
//int max1 = 99999;
//int cc = 0;
//int bestc = 0;
//int bestx[4] = { 0 };
//int a[4][4] = { 0 };
//int n = 4;
//int x[4] = { 0 };
//
//void swap(int* x, int* y)
//{
//	int c = *x;
//	*x = *y;
//	*y = c;
//}
//
//void backtrack(int i)
//{
//	if (i == n)
//	{
//		if( a[x[i - 1]][x[n]] != max1 && a[x[i]][x[1]] != max1 && cc + a[x[i - 1]][x[i]] + a[x[i]][x[1]] < bestc)
//		{
//			for (int j = 1; j <= n; j++)
//				bestx[j] = x[j];
//			bestc = cc + a[x[i - 1]][x[i]] + a[x[i]][x[1]];
//	}
//	}
//	else
//	{
//		for (int j = i; j < n; j++)
//		{
//			if (a[x[i - 1]][x[j]] != max1 && cc + a[x[i - 1]][x[j]] < bestc)
//			{
//				swap(x[j], x[i]);
//				cc += a[x[i - 1]][x[i]];
//				backtrack(i + 1);
//				cc -= a[x[i - 1]][x[i]];
//				swap(x[j], x[i]);
//			}
//		}
//	}
//}
