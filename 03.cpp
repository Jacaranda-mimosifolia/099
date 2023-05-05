#include<stdio.h>
#include<string.h>
#include<iostream>
int p_int[10];
short p_short[10];
float p_float[10];
double p_double[10];
char p_char[10];
int main()
{
	printf("Print Header:\tint\t\tshort\t\tfloat\t\tdouble\t\tchar\n");
	printf("================================================");
	printf("================================================\n");
	for(int i=0;i<10;i++)
	{
		printf("Elements:\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",&p_int[i],&p_short[i],&p_float[i],&p_double[i],&p_char[i]);
	}
	printf("================================================");
	printf("================================================\n");
	system("pause");
	return 0;
}
