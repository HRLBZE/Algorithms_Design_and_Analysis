//#include<iostream>
//using namespace std;
//
// void swap(int &x,int&y)
// {
// int t=x;
// x=y;
// y=t;
// }
//   
// int rand(int a[],int left,int right)
// {
// int c=Random(left,right);
// swap(a[left],a[c]);
// return petiton(a[],left,right);
// 
// }
// 
// 
//int petiton(int a[], int left, int right)
//{
//	int i = left;
//	int x = a[left];
//	int j = right + 1;
//	while (1)
//	{
//		while (x >= a[i++]);
//		while (x <= a[--j]);
//		if (i >= j)
//			break;
//		int c = a[i];
//		a[i] = a[j];
//		a[j] = c;
//	}
//	int c = a[j];
//	a[j] = x;
//	a[left] = c;
//	return j;
//}
//
//void quicksort(int a[], int left, int right)
//{
//	if (left < right)
//	{
//		int q = petiton(a, left, right);
//		quicksort(a, left, q - 1);
//		quicksort(a, q + 1, right);
//	}
//}