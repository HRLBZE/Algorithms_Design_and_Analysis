//#include<iostream>
//
//using namespace std;
//
//int staircase(int n, int stair[])
//{
//	if (n == 0)
//		return 0;
//	if (stair[n])
//		return stair[n];
//	else
//	{
//		return stair[n] = staircase(n - 1, stair) + staircase(n - 2, stair);
//	}
//}
//
//int main()
//{
//	int stair[50] = { 0,1,2 };
//	int n;
//	cin >> n;
//	int method = staircase(n, stair);
//	cout << method;
//	return 0;
//}