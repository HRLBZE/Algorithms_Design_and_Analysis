//#include<iostream>
//
//using namespace std;
//
//int bestx[4] = { 0 };
//int bestf = 10000;
//int M[4][3] = { 0 };
//int f1;
//int f2[4] = { 0 };
//int f = 0;
//int n = 3;
//int str[4] = { 0,1,2,3 };
//
//void swap(int* a, int* b)
//{
//	int c = *a;
//	*a = *b;
//	*b = c;
//}
//
//void backset(int i)
//{
//	if (i > n)
//	{
//		for (int k = 1; k <= n; k++)
//			bestx[k] = str[k];
//		bestf = f;
//	}
//	else
//	{
//		for (int k = i; k <= n; k++)
//		{
//			f1 += M[str[k]][1];
//			f2[i] = (f1 > f2[i - 1] ? f1 : f2[i - 1]) + M[str[k]][2];
//			f += f2[i];
//			if (f < bestf)
//			{
//				swap(&str[k], &str[i]);
//				backset(i + 1);
//				swap(&str[k], &str[i]);
//			}
//			f -= f2[i];
//			f1 -= M[str[k]][1];
//		}
//	}
//}
//
//
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 3; i++)
//		for (j = 1; j <= 2; j++)
//			cin >> M[i][j];
//	backset(1);
//	for (int k = 1; k <= 3; k++)
//		cout << bestx[k] << ' ';
//	cout << endl;
//	cout << bestf << endl;
//	return  0;
//}
//
//
//
///////////////////////////fail///////////////////////////
////#include<iostream>
////
////using namespace std;
////
////int bestx[3] = { 0 };
////int bestf = 1000;
////int M[4][2];
////int X[3] = { 1,2,3 };
////int f1 = 0;
////int f2[4] = { 0 };
////int f = 0;
////
////
////void swap(int* a, int* b)
////{
////	int c = *a;
////	*a = *b;
////	*b = c;
////}
////
////
////void backtrack(int i, int n)
////{
////	if (i > n)
////	{
////		for (int k = 0; k < n; k++)
////			bestx[k] = X[k];
////		bestf = f;
////	}
////	else
////	{
////		for (int k = i; k <= n; k++)
////		{
////			f1 += M[X[k - 1]][0];
////			f2[k] = ((f1 > f2[k - 1] ? f1 : f2[k - 1]) + M[X[k - 1]][1]);
////			f += f2[k];
////			if (f < bestf)
////			{
////				swap(&X[k - 1], &X[i - 1]);
////				backtrack(i + 1, n);
////				swap(&X[k - 1], &X[i - 1]);
////			}
////			f -= f2[k];
////			f1 -= M[X[k - 1]][0];
////		}
////	}
////
////}
////
////int main()
////{
////	int i, j;
////	for (i = 1; i <= 3; i++)
////		for (j = 0; j < 2; j++)
////			cin >> M[i][j];
////	backtrack(1, 3);
////
////
////	for (int k = 0; k < 3; k++)
////		cout << bestx[k] << ' ';
////	cout << endl;
////	cout << bestf << endl;
////	return  0;
////}
//
//
//
////////////////////////////////////test////////////////////
////
////#include<iostream>
////using namespace std;
////
////int k[2] = { 1,2 };
////
////
////void heihie()
////{
////	int c = k[0];
////	k[0] = k[1];
////	k[1] = c;
////}
////
////void haha()
////{
////	heihie();
////}
////
////int main()
////{
////	haha();
////	for (int i = 0; i < 2; i++)
////		cout << k[i];
////}
