//#include<iostream>
//using namespace std;
//
//int w[8] = { 0 };
//int price[8] = { 0 };
//int a[8][8] = { 0 };
//
//int max1(int a, int b)
//{
//	return a > b ? a : b;
//}
//
//void snap()
//{
//	for (int i = 0; i < 8; i++)
//		a[0][i] =0;
//	for(int i=1;i<8;i++)
//		for (int j = 0; j < 8; j++)
//		{
//			if (w[i] > j)
//				a[i][j] = a[i - 1][j];
//			else
//				a[i][j]=max1(a[i - 1][j], a[i - 1][j - w[i]] + price[i]);
// 		}
//}
//
//void show(int i,int j)
//{
//	while (j != 0 || i > 0)
//	{
//		if (a[i][j] == a[i - 1][j])
//			i--;
//		else
//		{
//			j -= w[i];
//			i--;
//		}
//	}
//}
// 
//int main()
//{
//
//}