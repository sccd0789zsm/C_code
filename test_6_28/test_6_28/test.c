#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
 
{
	//printf("��ã�\n");
	//char ch = 'A';
	//printf("%c\n",ch);
	//int age = 30;
	//printf("%d\n",age);
	////������ short int
	////������ long
	//long num = 100;
	//printf("%d\n",num);
	//float f = 5.0;
	//printf("%f\n", f);
	//double d = 3.14;
	//printf("%lf\n",d);

	//printf("%d\n", sizeof(char));
	//printf("%d\n", sizeof(short));
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof(long));
	//printf("%d\n", sizeof(long long));
	//printf("%d\n", sizeof(float));
	//printf("%d\n", sizeof(double));

	//int num1 = 10;//�ֲ�����-������{}�ڲ�

	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf("%d%d", &num1, &num2);
	sum = num1 + num2;
	printf("sum = %d\n",sum);
	/*extern int g_val;
	printf("g_val = %d\n",g_val);*/
	return 0;
}