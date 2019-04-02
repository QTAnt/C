#define _CRT_SECURE_NO_WARINGS 1
#include <stdio.h>
#include <stdlib.h>

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	int a = 10;
	int b = 20;
	int c = 0;
	c = Add(a, b);
	printf("c = %d\n", c);
	system("pause"); 
	return 0;
}
//每一次函数调用都要开辟一块大的空间(函数运行时的堆栈——栈帧)
//寄存器(边界地址)：esp(栈顶地址) ebp(栈底地址)——维护此次函数调用在堆栈中所开辟的空间栈顶、栈底的地址 
//反汇编——汇编代码
//
//
//
//

