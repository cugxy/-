// ����Ѱ�һ�������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

int solution1(int * arr, long n)
{
	if (arr == NULL)
	{
		return 0;
	}
	int result = arr[0];
	for (int i = 1; i < n; i++)
	{
		result = result ^ arr[i];
	}
	return result;
}

int solution2(int *arr, int n)
{
	if (arr == NULL)
	{
		return 0;
	}
	for (int i = 0; i < n; i++)
	{

	}
}

int main()
{
	int arr[11] = { 1, 6, 2, 2, 3, 3, 4, 4, 5, 5, 1};
	int result = solution1(arr, 11);
	cout << result;
	return 0;
}

