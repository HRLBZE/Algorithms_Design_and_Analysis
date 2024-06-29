//#include<iostream>
//using namespace std;
//
//int M[11][11] = { 0 };
//int s[11][11] = { 0 };
//int p[11] = { 0 };
//void juzhen()
//{
//	for (int i = 1; i <= 10; i++)
//		M[i][i] = 0;
//	for(int r=2;r<=10;r++)
//		for (int j = 1; j <= 10 - r + 1; j++)
//		{
//			int k = j + r - 1;
//			M[j][k] = M[j][j] + M[j + 1][k] + p[j - 1] * p[j] * p[k];
//			s[j][k] = j;
//			for (int l = j + 1; l < k; l++)
//			{
//				int t = M[j][l] + M[l][k] + p[l - 1] * p[l] * p[k];
//				if (t < M[j][k])
//				{
//					M[j][k] = t;
//					s[j][k] = l;
//				}
//			}
//		}
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
////int M[11][11] = { 0 }; //记录最小次数
////int s[11][11] = { 0 };//记录中断表
////int p[11] = { 0 };
////
////void juzhen()
////{
////	for (int i = 1; i < 10; i++)
////		M[i][i] = 0;
////	for(int i=2;i<10;i++)
////		for (int j = 1; j < 10 - i + 1; j++)
////		{
////			int k = j + i - 1;
////			M[j][k] = M[j][j] + M[j + 1][k] + p[j-1] * p[k] * p[j];
////			s[j][k] = j;
////			for (int n = j + 1; n < k; n++)
////			{
////				int t = M[j][n] + M[n + 1][k] + p[j - 1] * p[j] * p[k];
////				if (t < M[j][k])
////				{
////					M[j][k] = t;
////					s[j][k] = n;
////				}
////			}
////		}
////}
////
////int main()
////{
////
////}