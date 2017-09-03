// Drinks.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

#define INF 1000000

int opt[100][100];

int S[5] = { 1, 2, 3, 4,5 };
int *V = new int[5] {2, 4, 8,16, 32 };
int C[5] = { 10, 10, 10,10,10 };
int H[5] = { 7, 8, 9,10,7 };
//int B[5] = { 10, 10, 10,10,10 };


int Cal(int V, int T)
{
	opt[0][T] = 0;
	for (int i = 0; i <= V; i++)
	{
		opt[i][T] = -INF;
	}
	for (int j = T - 1; j >= 0; j--)
	{
		for (int i = 0; i <= V; i++)
		{
			opt[i][j] = -INF;
			for (int k = 0; k <= C[j]; k++)
			{
				if (i < k*V[j])
					break;
				int x = opt[i - k * V[j]][j + 1];
				if (x != -INF)
				{
					x += H[j] * k;
					if (x > opt[i][j])
						opt[i][j] = x;
				}
			}
		}
	}
	return opt[V][0];
}

int main()
{
	int result = Cal(100, 5);
	cout << result;
    return 0;
}

