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
//ÿһ�κ������ö�Ҫ����һ���Ŀռ�(��������ʱ�Ķ�ջ����ջ֡)
//�Ĵ���(�߽��ַ)��esp(ջ����ַ) ebp(ջ�׵�ַ)����ά���˴κ��������ڶ�ջ�������ٵĿռ�ջ����ջ�׵ĵ�ַ 
//����ࡪ��������
//
//
//
//

