/* 2025-04-13 C��� ǥ�� ���̺귯�� �Լ� ���� */

#include <stdio.h> // ǥ�� ����� �������
#include <math.h> // ���� �Լ� ��� ���Ͽ� ����� �Լ� ����� ���� ���Խ�Ŵ
#include <stdlib.h> // ǥ�ض��̺귯��(��ƿ��Ƽ) ��� ���� ����

// �Լ� ����(�Լ� ����) : {}��ü ������ main()�ؿ� �ۼ�, �ڵ� �������� ����
// �ҽ��ڵ� �󿡼� �Լ��� ȣ���ϱ� ���� �̸� �Լ��� ����(�Ǵ� ����)�Ǿ� �־�� �����Ϸ��� �� �� �ִ�
void print_line(char); // �Ķ���� ������ ���� ����

int main(void) {
	
	print_line('*'); // �Լ� ȣ��(�Լ� ����)
	printf("\n ���α׷��� ��� \n");
	print_line('=');

	int a = 5, b = 3;
	printf("\n%d + %d = %d\n", a, b, a + b);

	printf("\n----------------------------------\n\n");

	// abs() : ���� �Լ�
	int x = 5, y = -5;

	int result_x = abs(x);
	int result_y = abs(y);

	printf("%3d�� ���� = %2d \n", x, result_x);
	printf("%3d�� ���� = %2d \n", y, result_y);

	printf("\n----------------------------------\n\n");

	//pow(a, b) : a�� b��(a^b)
	a = 2, b = 3;

	double result = pow(a,b);

	printf("%3d�� %3d�� = %3.0f\n",a, b, result);

	printf("\n----------------------------------\n\n");

	// sqrt() : ������
	int i = 25;

	double result2 = sqrt(i);

	printf("%3d�� ������ = %.0f \n", i, result2);
	//%.0f : ���������� ���е� ����, double(�Ǽ�)�� �Ҽ� 0�ڸ����� ��Ÿ��(������ ǥ��)

	printf("\n----------------------------------\n\n");

	// rand() : ���� ����
	for (int i = 1; i <= 5; i++) {
		printf("%dȸ ���� : %d \n", i, rand());
	}

	printf("\n----------------------------------\n\n");

	// 1~10������ ���� 5ȸ ���
	for (int i = 1; i <= 5; i++) {
		printf("%dȸ ���� : %d \n", i, (rand() % 10) + 1);
	}

	printf("\n----------------------------------\n\n");

	return 0;
}

// �Լ� ����
void print_line(char c) {
	for (int i = 0; i < 40; i++) {
		printf("%c", c);
	}
}