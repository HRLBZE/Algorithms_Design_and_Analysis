//#include<stdio.h>
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int a[3000], b[3000];
//int cmp(int a, int b)
//{
//    return a > b;
//}
//int main()
//{
//    int i, n, j, sum, k, f, ji;
//    while (scanf("%d", &n) && n != 0)
//    {
//        for (i = 0; i < n; i++)
//            scanf("%d", &a[i]);
//        for (i = 0; i < n; i++)
//            scanf("%d", &b[i]);
//        sort(a, a + n, cmp);
//        sort(b, b + n, cmp);
//        ji = 0;    //   ��¼ king  �����õ���  ѭ���������ж����� 
//        i = j = sum = 0;
//        k = n - 1;
//        f = n - 1;
//        while (1)
//        {
//            if (ji == n)   break;   //   king  ����ȫ����������� 
//            if (b[j] > a[i]) { sum -= 200; j++; k--; ji++; continue; }  //���king�ı�tian�Ŀ���� ��tian�������king�Ŀ��� 
//            if (b[j] == a[i]) {                                       //������ 
//                if (b[f] < a[k]) { f--; k--; sum += 200; ji++; continue; } //�����˵����� tian�������king���������� 
//                if (b[j] > a[k]) { sum -= 200; k--; j++; ji++; }
//                else { k--; j++; ji++; }
//                continue;
//            }
//            if (b[j] < a[i]) { sum += 200; j++; i++; ji++; continue; }  //���tian�ı�king�Ŀ���� ֱ�ӱ� 
//        }
//        printf("%d\n", sum);
//    }
////}
////
////
////
////
////
////
////
//////#include<iostream>
//////#include<algorithm>
//////#include <string.h>
//////using namespace std;
//////int TH[1001];
//////int KH[1001];
//////int derm[1001];
//////
//////void Sum(int Knum, int Tnum, int* kum, int* big)
//////{
//////	int j;
//////	if (*kum == 0)
//////		return;
//////	for (j = Knum - 1; j >= 0; j--)
//////	{
//////		if (KH[j] > TH[Tnum - 1])
//////			continue;
//////		else if (KH[j] == TH[Tnum - 1])
//////		{
//////			*kum -= 1;
//////			Sum(j, Tnum - 1, kum, big);
//////			break;
//////		}
//////		else
//////		{
//////			*big += 1;
//////			Sum(j, Tnum - 1, kum, big);
//////			break;
//////		}
//////	}
//////}
//////
//////int main()
//////{
//////	int n = 50;
//////	int i, j, num, k;
//////	for (i = 0; i < n; i++)
//////	{
//////		cin >> num;
//////		for (j = 0; j < num; j++)
//////			cin >> TH[j];
//////		for (j = 0; j < num; j++)
//////			cin >> KH[j];
//////		sort(TH, TH + num);
//////		sort(KH, KH + num);
//////		int k = 0;
//////		int knum = num;
//////		int big = 0;
//////		Sum(num, num, &knum, &big);
//////		long long sum = 0;
//////		sum = (2 * big - knum) * 200;
//////		cout << sum << endl;
//////		memset(KH, 0, sizeof(KH));
//////		memset(TH, 0, sizeof(TH));
//////	}
//////}