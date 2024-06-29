//#include<iostream>
//
//using namespace std;
//
//int xx[5][5] = { 0 };
//int x[5] = { 0 };
//int bx[5] = { 0 };
//int nnum = 0;
//int bnnum = 0;
//int n = 5;
//
//
//void backtrack(int i)
//{
//	if (i > n)
//	{
//		for (int j = 1; j <= n; j++)
//			bx[j] = x[j];
//		bnnum = nnum;
//	}
//	else
//	{
//		bool ok = true;
//		for (int j = 1; j < i; j++)
//			if (x[j] && !xx[i][j])
//			{
//				ok = false;
//				break;
//			}
//		if (ok)
//		{
//			x[i] = 1;
//			nnum++;
//			backtrack(i + 1);
//			nnum--;
//		}
//		else
//			if (nnum + n - i > bnnum)
//			{
//				x[i] = 0;
//				backtrack(i + 1);
//			}
//	}
//}
//
//
//
//
//
//
////#include<iostream>
////
////using namespace std;
////
////
////int chax[5][5] = { 0 };
////int bestx[] = { 0,0,0,0,0 };
////int x[] = { 0,0,0,0,0 };
////int nnum = 0;
////int bestn = 0;
////int n;
////
////
////void backtrack(int i)
////{
////	if (i > n)
////	{
////		for (int j = 1; j <= n; j++)
////			bestx[j] = x[j];
////		bestn = nnum;
////	}
////	else
////	{
////		bool ok = 1;
////		for (int j = 1; j < i; j++)
////		{
////			if (x[j] == 1 && !chax[i][j])
////			{
////				ok = false;
////				break;
////			}
////		}
////		if (ok)
////		{
////			x[i] = 1;
////			nnum++;
////			backtrack(i + 1);
////			nnum--;
////		}
////		else
////		{
////			if (nnum + n - i > bestn)
////			{
////				x[i] = 0;
////				backtrack(i + 1);
////			}
////		}
////	}
////}
////
////int main()
////{
////
////}