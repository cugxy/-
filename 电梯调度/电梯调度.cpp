// µçÌÝµ÷¶È.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

#define FLOORNUMBER 6
#define MAXNUMBER 1000000

int CalcuTargetFloor1(int arr[])
{
	int targetFloor = 0;
	int min = MAXNUMBER;
	for (int i = 0; i < FLOORNUMBER; i++)
	{
		int sum = 0;
		for (int j = 0; j < i; j++)
		{
			sum += arr[j] * (i - j);
		}
		for (int j = i + 1; j < FLOORNUMBER; j++)
		{
			sum += arr[j] * (j - i);
		}
		if (min > sum)
		{
			min = sum;
			targetFloor = i + 1;
		}
	}
	return targetFloor;
}

int main()
{
	int arr[FLOORNUMBER] = { 3, 3, 4, 4, 5, 5 };
	int targetFloor = CalcuTargetFloor1(arr);
	cout << targetFloor << endl;
    return 0;
}

