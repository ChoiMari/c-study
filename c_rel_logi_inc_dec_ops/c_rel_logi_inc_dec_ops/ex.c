/* 2025-04-04 
����, ��, ���� ������ ����
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	/*
	
	// ��ȣ(+, -) ������ - ���� ������(�ǿ������� ���� 1)

	int x, y;
	
	x = -10;
	y = -x;

	printf("x = %d \n", x); // -10
	printf("y = %d \n", y); // 10
	
	*/

	/*
	
	// ���� ������(����, ���� ������)

	int a = 10, b = 10;
	int x, y;

	// ���� ������ : ����/���� ��Ų �� ����
	x = ++a; // a = 11, x = 11
	y = --b; // b = 9, y = 9 

	printf("���������� \n");
	printf("a = %d, b = %d \n", a, b); // a = 11, b = 9  
	printf("x = %d, y = %d \n", x, y); // x = 11, y = 9
	
	*/

	/*
	
	// ���� ������ : ���� �� ����/����
	int a = 10, b = 10;
	int x, y;

	x = a++; // x = 10 , a = 11
	y = b--; // y = 10 , b = 9

	printf("���������� \n");
	printf("a = %d, b = %d \n", a, b); // a = 11, b = 9
	printf("x = %d, y = %d \n", x, y); // x = 10, y = 10

	*/
	/*
	* 
	int x = 10, y = 10;

	printf("�������������� ���� - ���� �� ��� \n");
	printf("  x = %d \n", x);   //  x = 10
	printf("++x = %d \n", ++x); //++x = 11
	printf("  x = %d \n\n", x); //  x = 11

	printf("�������������� ���� - ��� �� ����\n");
	printf("  y = %d \n", y);   //  y = 10 
	printf("y++ = %d \n", y++); //y++ = 10
	printf("  y = %d \n", y);   //  y = 11

	*/

	/*
	
	int x = 1, y = 1;

	int next_x = ++x; // x = 2 , next_x = 2
	int next_y = y++; // next_y = 1 , y = 2 

	printf("++x = %d \n", next_x); //++x = 2
	printf("y++ = %d \n", next_y); //y++ = 1

	*/

	/*
	
	// ���� ������
	// ���̸� 1 , �����̸� 0 ����

	int x = 2, y = 4;

	printf("x == y�� ��� : %d \n", x == y);  // x == y�� ��� : 0
	printf("x != y�� ��� : %d \n", x != y);  // x != y�� ��� : 1
	printf("x > y�� ���  : %d \n", x > y);   // x > y�� ���  : 0
	printf("x < y�� ���  : %d \n", x < y);   // x < y�� ���  : 1
	printf("x >= y�� ��� : %d \n", x >= y);  // x >= y�� ��� : 0
	printf("x <= y�� ��� : %d \n", x <= y); // x <= y�� ���  : 1
	
	*/
	
	/*
	
	int x, y;

	printf("�� ���� ������ �Է��ϼ���.\n");
	scanf("%d", &x);
	scanf("%d", &y);
	printf("�Է� ���� ���� : %d, %d \n\n", x, y);

	printf("%d == %d�� ��� : %d \n", x, y, x == y);   
	printf("%d != %d�� ��� : %d \n", x, y, x != y);   
	printf("%d > %d�� ���  : %d \n", x, y, x > y);    
	printf("%d < %d�� ���  : %d \n", x, y, x < y);    
	printf("%d >= %d�� ��� : %d \n", x, y, x >= y);   
	printf("%d <= %d�� ��� : %d \n", x, y, x <= y); 

	*/

	// ���� ������
	int x , y;

	printf("ù ��° ����? \n");
	scanf("%d", &x);

	printf("�� ��° ����? \n");
	scanf("%d", &y);
	printf("-------------------- \n\n");

	printf("ū ��   = %d \n", (x > y) ? x : y);
	printf("���� �� = %d \n", (x < y) ? x : y);

	return 0; // �ü������ ��ȯ. 0�� ���α׷� ���� ���Ḧ �ǹ���
}