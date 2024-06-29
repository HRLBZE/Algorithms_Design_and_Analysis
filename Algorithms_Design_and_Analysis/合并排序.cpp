//#include<iostream>
//using namespace std;
//
//
//void copy(int a[], int b[], int left, int right)
//{
//	int i = left;
//	int j = right;
//	while (i <= j)
//	{
//		a[i] = b[i];
//		i++;
//	}
//
//}
//
//void merge(int a[], int b[],int mid, int left, int right)
//{
//	int l = left;
//	int r = mid+1;
//	int b1 = left;
//	while(l<=mid&&r<=right)
//	{
//		if (a[l] > a[r])
//			b[b1++] = a[r++];
//		else
//			b[b1++] = a[l++];
//	}
//	if (l <= mid)
//		while (l <= mid)
//			b[b1++] = a[l++];
//	else
//		while (r <= right)
//			b[b1++] = a[r++];
//}
//
//void mergesort(int a[],int b[], int left, int right)
//{
//	if (left < right)
//	{
//		int mid = (left + right) / 2;
//		mergesort(a, b,left, mid);
//		mergesort(a,b,mid + 1, right);
//		merge(a, b, mid,left, right);
//		copy(a,b, left, right);
//	}
//}