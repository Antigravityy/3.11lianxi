#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>//�����ϰ3.11
#include<float.h>/*C������<limits.h>��<float.h>ͷ�ļ���Ԥ�ȶ����˳����������͵����ơ�*/
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
	printf("%ld\n", INT_MAX);/*��ע��1��Ӧ��float���͵����ֵ����FLT_MAX��int���͵����ֵ����INT_MAX��*/


	return 0;
}