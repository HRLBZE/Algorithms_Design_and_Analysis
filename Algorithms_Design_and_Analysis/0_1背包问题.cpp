//#include<iostream>
//#include<queue>
//using namespace std;
//class haha
//{
//public:
//	haha* te;
//	int a;
//	bool operator<(const haha* other) const {
//		return a < other->a;  // 按 ew 从大到小排序
//	}
//};
//
//priority_queue<haha*, vector<haha*>, less<haha* >> t;
//
//int main()
//{
//	haha* first = new haha();
//	first->a = 5;
//	first->te = NULL;
//	haha* sec = new haha();
//	sec->te = first;
//	sec->a = 3;
//	t.push(first);
//	t.push(sec);
//	t.pop();
//	haha* o = t.top();
//	o = o->te;
//	cout << o->a;
//	delete first;
//	delete sec;
//}
//
//
//
////#include<iostream>
////#include<queue>
////
////using namespace std;
////
////int a[8] = { 0 };//假设已经存好//单位钱
////int n = 8;
////int w[8] = { 0 };//重量
////int p[8] = { 0 };//每个的总钱
////int c;
////int bestw;
////class node
////{
////public:
////	node *n;
////	int i;
////	int Ew;
////	int price;
////};
////priority_queue<node>q;
////
////
////int derm(node q)
////{
////	int k = q.Ew;
////	int b = q.price;
////	int i = q.i;
////	while (k+ w[i] <= c&&i<=n)
////	{
////		k += w[i];
////		b += p[i];
////		i++;
////	}
////	if (i <= n)
////		b += p[i] / w[i] * (c - k);
////	return b;
////}
////
////void ccc()
////{
////	int i = 1;
////	int Ew = 0;
////	int price = 0;
////	node haha;
////
////	while (i != n + 1)
////	{
////		if (Ew + w[i] < c)
////		{
////			if (Ew+w[i]>bestw)
////			{
////				bestw = Ew + w[i];
////
////			}
////				q.push(node());
////		}
////		int c =derm(haha);
////		if(c>bestw)
////			q.push(node());
////		node k = q.top();
////		q.pop();
////		Ew = k.price;
////		i = k.i;
////		
////	}
////}