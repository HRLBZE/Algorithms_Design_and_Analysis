//#include<iostream>
//
//using namespace std;
//
//int sum = 0;
//int color = 4;
//int xcolor[5] = { 0 };
//int x[5][5] = { 0 };
//int n = 4;
//
//bool ok(int i)
//{
//	for (int j = 1; j < i; j++)
//		if (x[i][j] && xcolor[i] == xcolor[j])
//			return false;
//	return true;
//}
//
//
//void backtrack(int i)
//{
//	if (i > n)
//		sum++;
//	else
//	{
//		for (int j = 1; j <= color; j++)
//		{
//			xcolor[i] = j;
//			if (ok(i))
//				backtrack(i + 1);
//		}
//
//	}
//
//}
//
//
////#include<iostream>
////using namespace std;
////
////int sum = 0;
////int n = 4;
////int a[4][4] = { 0 };
////int acolor[4] = { 0 };
////int color = 3;
////
////bool ok(int i)
////{
////	for (int j = 1; j < i; j++)
////		if (a[i][j] && acolor[j] == acolor[i])
////			return false;
////	return true;
////}
////
////void backtrack(int i)
////{
////	if (i > n)
////		sum++;
////	else
////	{
////		for (int j = 1; j <= color; j++)
////		{
////			acolor[i] = j;
////			if (ok(i))
////				backtrack(i + 1);
////		}
////	}
////}
////
////int main()
////{}