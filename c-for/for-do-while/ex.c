/* 2025-04-10 for��, ���� for��, do while�� */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	// ����1 : ������ ����ϱ�(2��)
	int dan = 2;

	for (int i = 1; i < 10; i++) {
		printf("%d * %d = %2d \n", dan, i, dan * i);
	}

	printf("\n-----------------------\n\n");

	// ����2 : 1~10���� ��
	int start = 1;
	int end = 10;
	int sum = 0;
	
	for (int i = start;i <= end;i++) {
		sum += i;
	}
	printf("%d ~ %d������ �� : %d \n", start, end, sum);

	printf("\n-----------------------\n\n");

	// ����3 : 1~100���� Ȧ���� ��
	start = 1;
	end = 100;
	sum = 0;

	for (int i = start; i <= end; i+= 2) {
		sum += i;
	}
	printf("%d ~ %d������ Ȧ�� �� : %d \n", start, end, sum);

	printf("\n-----------------------\n\n");

	//����4 : 5���� ������ �Է� �޾� �� ���
	int input_data;
	sum = 0;
	int i;
	for (i = 0;i < 5;i++) { //i�� 0~4���� 5ȸ �ݺ� ����, 5�Ǹ� ����
		printf("%d��° ���� �Է� :  ", i + 1);
		scanf("%d",&input_data);
		sum += input_data;
	}
	printf("\n�Է� ���� %d�� �������� �� : %d \n",i, sum);

	printf("\n-----------------------\n\n");

	//����5) ���� for���� ����� ������ ���(2~9��)

	for (int i = 2; i < 10; i++) { // i�� 2~9���� 1�� ����, 10�Ǹ� ����
		printf("===== %d�� ===== \n", i); 
		for (int j = 1;j < 10; j++) { // j�� 1~9���� 1�� ����, 10�Ǹ� ����
			printf("%d * %d = %2d \n", i, j, i * j);
		}
		printf("\n"); // ����(inner) �ݺ��� ������ �ٳ���
	}

	printf("\n-----------------------\n\n");

	//����6) do-while��
	i = 1000;
	do {
		printf("do-while���� ���ǽ��� �����̿��� ������ �ѹ� ���� ���� \n");
	} while (i < 1);

	printf("\n-----------------------\n\n");




	return 0;
}