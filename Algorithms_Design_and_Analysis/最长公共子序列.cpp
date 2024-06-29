//#include<iostream>
//using namespace std;
//
//int x[11] = { 0 };
//int y[11] = { 0 };
//int c[11][11] = { 0 };
//int b[11][11] = { 0 };
//
//
//void L(int i, int j, int* x, int** b)
//{
//	if (i == 0 || j == 0)
//		return;
//	if (b[i][j] == 1)
//	{
//		cout << i << j << endl;
//		cout << x[i] << endl;
//		L(i - 1, j - 1, x, b);
//	}
//	else if (b[i][j] == 2)
//	{
//		L(i - 1, j, x, b);
//	}
//	else
//		L(i, j - 1, x, b);
//	
//}
//
//
//void ttt()
//{
//	for (int i = 1; i <= 10; i++)c[i][0] = 0;
//	for (int j = 1; j <= 10; j++)c[0][j] = 0;
//
//	for (int i = 1; i <= 8; i++)    //设定x的最长为8，y的最长为9
//	{
//		for (int j = 1; j <= 9; j++)
//			if (x[i] == y[j])
//			{
//				c[i][j] = c[i - 1][j - 1] + 1;
//				b[i][j] = 1;
//			}
//			else
//			{
//				if (c[i - 1][j] >= c[i][j - 1])
//				{
//					c[i][j] = c[i - 1][j];
//					b[i][j] = 2;
//				}
//				else
//				{
//					c[i][j] = c[i][j - 1];
//					b[i][j] = 3;
//				}
//			}
//	}
//}