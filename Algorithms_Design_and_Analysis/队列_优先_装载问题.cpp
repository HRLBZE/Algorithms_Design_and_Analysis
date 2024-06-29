////优先队列式分支限界法
//#include<queue>
//#include<iostream>
//using namespace std;
//
//class node
//{
//private:
//	
//public:
//	node* n = 0;
//	int ew = 0;
//	int lever = 0;
//	node(int a, int b)
//	{
//		ew = a;
//		lever = b;
//	}
//	bool operator<(const node& other)const
//	{
//		return ew < other.ew;
//	}
//};
//
//priority_queue<node> q;
//
//
//int w[8] = { 0 };
//int c = 0;
//int bestw = { 0 };
//int n = 8;
//int r[8] = { 0 };
//
//void ha()
//{
//	int Ew = 0;
//	int i = 1;
//	q.push(node(0, 1));
//	while (i != n + 1)
//	{
//		if (w[i] + Ew < c)
//			q.push(node(w[i] + Ew, i + 1));
//		q.push(node(Ew, i + 1));
//		node xia = q.top();
//		q.pop();
//		i = xia.lever;
//		Ew = xia.ew-r[i-1];
//		
//	}
//
//}
//
////#include<iostream>
////#include<queue>
////using namespace std;
////
////priority_queue<int>q;
////
////int main()
////{
////	q.push(3);
////	q.push(88);
////	q.push(2);
////	q.push(100);
////	q.pop();
////	int i = q.top();
////	cout << i;
////}
//
//
//
//
//////////////////////////////////队列式分支限界法///////////////
////#include<iostream>
////#include<queue>
////using namespace std;
////
////queue<int> q;
////int bestw;
////int w[10] = { 0 };
////int c;
////int n = 9;
////int wight;//总货物
////int r=wight;
////
////int hha()
////{
////	int i = 1;
////	int Ew = 0;
////	q.push(-1);
////	while (true)
////	{
////		r -= w[i];
////		if (Ew + w[i] < c)
////		{
////			if(i==n)
////			{ 
////				if (Ew + w[i] > bestw)
////					bestw = Ew + w[i];
////			}
////			else
////			q.push(Ew + w[i]);
////		}
////		if (Ew+r>bestw)
////			q.push(Ew);
////		Ew = q.front();
////		q.pop();
////		if (Ew == -1)
////		{
////			if (q.size() == 0)
////				return bestw;
////			else
////				Ew = q.front();
////			q.pop();
////		}
////	}
////}
////
/////////////////////////////////////////////////////////////////////ok
////
////
//////#include<iostream>
//////#include<queue>
//////
//////using namespace std;
//////
//////queue<int> Ew;
//////int w[9] = { 0 };
//////int n = 8;
//////int bestw = 0;
//////int c;
//////
//////int haha()
//////{
//////	Ew.push(-1);
//////	int i = 1;
//////	
//////	while (true)
//////	{
//////		//左
//////		if (Ew.front() + w[i] <= c)
//////		{
//////			Ew.push(Ew.front() + w[i]);
//////		}
//////		//右
//////		Ew.push(Ew.front());
//////		
//////		if (Ew.front() == -1)
//////		{
//////			if (Ew.size() == 1)
//////				return bestw;
//////			else
//////			{
//////				Ew.pop();
//////				Ew.push(-1);
//////				i++;
//////			}
//////		}
//////		Ew.pop();
//////	}
//////}
////
////
////
////
////
//////
//////#include<iostream>
//////#include<sql.h>
//////#include<queue>
//////using namespace std;
//////
//////int bestw = 0;
//////int cw = 0;
//////int w[10] = { 0 };
//////queue<int>q;
//////int n = 8;
//////int r = 0;
//////
//////int queuefen()
//////{
//////	int ew = 0; int i = 0;
//////	q.push(-1);
//////	while (true)
//////	{
//////		//左子树
//////		if (ew + w[i] <= cw&&i<n)
//////		{
//////			if (ew + w[i] > bestw)
//////				bestw = ew + w[i];
//////			q.push(ew + w[i]);
//////		}
//////		if (ew + r && i < n)
//////		{
//////			q.push(ew);
//////		}
//////		i++;
//////		if (q.front()==-1)
//////		{
//////			if (q.size() == 1)
//////				return bestw;
//////			else
//////			{
//////				q.push(-1);
//////			}
//////		}
//////		q.pop();
//////
//////	}
//////}