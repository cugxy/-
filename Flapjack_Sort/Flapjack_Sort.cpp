// Flapjack_Sort.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "CPrefixSorting.h"

int main()
{
	CPrefixSorting A;
	int a[] = { 6,5 };
	int b = 2;

	A.Run(a, b);
	A.OutPut();
    return 0;
}

