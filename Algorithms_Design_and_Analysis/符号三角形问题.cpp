//#include<iostream>
//
//using namespace std;
//
//int sum = 0;
//int i = 1;
//int p[8][8] = { 0 };
//int count_fu = 0;
//
//
//
//void backtrack(int i)
//{
//	int k, j;
//	if (count_fu > 18 || (i + 1) * i / 4 > 18)
//		return;
//	if (i > 7)
//		sum++;
//	for (k = 0; k < 2; k++)
//	{
//		p[1][i] = k;
//		count_fu += k;
//		for (j = 2; j <= i; j++)
//		{
//			p[j][i - j + 1] = p[j - 1][i - j + 1] ^ p[j - 1][i - j + 2];
//			count_fu += p[j][i - j + 1];
//		}
//		backtrack(i + 1);
//		for (j = 2; j < i; j++)
//		{
//			count_fu -= p[j][i - j + 1];
//		}
//		count_fu -= k;
//	}
//}
//
//
//int main()
//{
//	int i, j;
//	int n = 8;
//	backtrack(1);
//	cout << sum;
//}