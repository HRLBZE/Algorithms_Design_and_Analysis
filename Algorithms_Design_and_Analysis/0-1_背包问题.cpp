//#include<iostream>
//using namespace std;
//
//int px[] = { 0,10,5,3,1 };
//int wx[] = { 0,1,2,3,4 };
//int bestf = 0;
//int price = 0;
//int weight=0;
//int w=0;
//int n = 4;
//
//double derm(int i)
//{
//	double pri = price;
//	int wleft = w - weight;
//	while (i <= n && wx[i] < wleft)
//	{
//		wleft -= wx[i];
//		pri += px[i];
//		i++;
//	}
//	if (i <= n)
//	{
//		pri += wleft*px[i] / wx[i];
//	}
//	return pri;
//}
//
//int backtrack(int i)
//{
//	if (i > n)
//		bestf = price;
//	else
//	{
//		if (weight + wx[i] < w)
//		{
//			weight += wx[i];
//			price += px[i];
//			backtrack(i + 1);
//			price -= px[i];
//			weight -= wx[i];
//		}
//		else if (derm(i + 1) > bestf)
//			backtrack(i + 1);
//	}
//}




















/////////////////////////////////////第一遍
//#include<iostream>
//using namespace std;
//
//int px[] = { 0,6,5,4,3 };
//int cx[] = { 0,1,2,3,4 };
//double pnjx[] = { 0,6,2.5,1.2,0.7 };
//int c;
//int cw;
//int price_tmp;
//int bestf;
//int n = 4;
//
////假设已经排好序了
//double bound(int i)
//{
//	int cleft = c - cw;
//	double b = price_tmp;
//	while(i <= n || cleft-cx[i]>=0)
//	{
//		cleft -= cx[i];
//		b += px[i];
//		i++;
//	}
//	if(i<=n)
//	{
//		b += cleft * px[i] / cx[i];
//	}
//	return b;
//}
//
//double backtrack(int i)
//{
//	if (i > n)
//	{
//		bestf = price_tmp;
//		return;
//	}
//	else
//	{
//		if (cw + cx[i] <= c)
//		{
//			price_tmp += px[i];
//			cw += cx[i];
//			backtrack(i + 1);
//			cw -= cx[i];
//			price_tmp -= px[i];
//		}
//		else if (bound(i + 1)>bestf)
//			backtrack(i + 1);
//	}
//}
