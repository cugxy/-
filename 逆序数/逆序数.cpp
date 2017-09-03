// 逆序数.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include <iostream>
using namespace std;

int static counts = 0;

int ReverseNumber1(int *arr, int n)
{
	int result = 0;
	int i = 0, j = 0;
	for (; i < n; ++i)
	{
		for (j = i + 1; j < n; j++)
		{
			if (arr[j] > arr[i])
			{
				result++;
			}
		}
	}
	return result;
}

void Merge(int a[], int first, int mid, int last, int temp[])
{
	int i = first, j = mid + 1;
	int m = mid, n = last;
	int k = 0;

	while (i <= m && j <= n)
	{
		if (a[i] <= a[j])
			temp[k++] = a[i++];
		else
		{
			temp[k++] = a[j++];
			counts += mid - i + 1;
		}
	}
	while (i <= m)
		temp[k++] = a[i++];

	while (j <= n)
		temp[k++] = a[j++];

	for (i = 0; i < k; i++)
		a[first + i] = temp[i];
}

int ReverseNumber2(int *arr, int f, int l, int *temp)
{
	if (f == l)	
		return 0;
	int m = (f + l) / 2;
	ReverseNumber2(arr, f, m, temp);
	ReverseNumber2(arr, m + 1, l, temp);
	Merge(arr, f, m, l, temp);
}

//int ReverseNumber3()
//{
//	int result = 0;
//
//	return result;
//}


#define MAX 50

int main()
{
	int a[6] = { 1, 2, 3, 4, 6, 5 };
	int *b = new int [MAX];
	ReverseNumber2(a, 0, 5, b);
	cout << counts;
    return 0;
}

