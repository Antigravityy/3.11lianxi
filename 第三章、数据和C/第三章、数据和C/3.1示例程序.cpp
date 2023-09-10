#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>//编程练习3.11
#include<float.h>/*C语言在<limits.h>和<float.h>头文件中预先定义了常见数据类型的限制。*/
#include<limits.h>
int main(void)/*This program is perfect*/
{
	int num1;
	float num2;
	float num3;
	num1 = 2147483647+1;
	num2 = 2.0e30 * 5.0e30;
	num3 = 10.0/3;
	printf("The int overflow is %d.\n", num1);
	printf("The float overflow and underflow is %f and %f.\n", num2, num3);
	printf("%ld\n", INT_MAX);/*与注释1对应，float类型的最大值就是FLT_MAX，int类型的最大值就是INT_MAX。*/


	return 0;
}