/* 2025-04-07 switch�� ���� */
/*

switch(���ǰ�){ // ����,����� ������ ������ ����, enum, ���� ����(�Ǽ�, ���ڿ� �Ұ�)
	case ����� : ��ɹ�; //�ʼ�, case�� �ݵ�� 1�� �̻�, ����� - ����, ����, enum ����(���ڿ�, �Ǽ� �Ұ�)
		break; // ����(�ٵ� �Ⱦ��� ������ �� ����)
	default : ��ɹ�; // ���� ����, �ش��ϴ� case�� ���� ��� �����
}

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	
	int n;

	printf("���� �Է�(1~3) : ");
	scanf("%d", &n);

	switch (n) {
		case 1 : printf("\n1�� \n\n"); //���ǽ��� ���� 1�� ��� ����(break�� ���� ������)
			break;
		case 2 : printf("\n2�� \n\n"); //���ǽ��� ���� 2�� ��� ����(break�� ���� ������)
			break;
		case 3 : printf("\n3�� \n\n"); //���ǽ��� ���� 3�� ��� ����(break�� ���� ������)
			break;
		default: printf("\n1 ~ 3������ �Է��Ͻʽÿ�.\n\n"); //���ǰ��� �ش��ϴ� case�� ���� �� �����
	}

	//-----------------------------------------------------------

	/* �߸��� ����
	double d = 2.0;

	// switch�� ���ǰ� : ������(int, char, enum) �� ���
	switch (d) { // ������ ���� : ���ǰ��� �Ǽ� �Ұ�
		case 0.1 : printf("\n�Ǽ� ������ ���� \n\n"); 
			break;
		case '2' : printf("\n����Ŀ� ���� ���� \n\n"); // '2'�� ���� ���ͷ� �� ���������� ASCII ������(50)
			break;
		case "study" : printf("\n���ڿ� ������ ���� \n\n"); 
			break;
		case 2 : printf("\n���� ���� \n\n");
			break;
		case 2 : printf("\n������ ���� : �ߺ� �Ұ� \n\n");
			break;
		default : printf("\n--------------------\n\n"); 
	}
	*/

	//-----------------------------------------------------------

	int i;

	printf("���� �Է�(1~5) : ");
	scanf("%d", &i);

	switch (i) {
		case 1: printf("\n���� \n"); // ���� �������� ��µ�(break�� ���� ������)
			                           
		case 2: printf("\n���� \n"); // ���� ��µ�(break�� ���� ������)
			break;
		case 3: printf("\nü�� \n"); 
			break;
		case 4: printf("\n���ξ��� \n"); 
			break;
		case 5: printf("\n������ ������ \n"); 
			break;
		default: printf("\n1 ~ 5������ �Է��Ͻʽÿ�.\n"); //���ǰ��� �ش��ϴ� case�� ���� �� �����
	}

	printf("\n\n----------------------------------------------------\n\n");

	// break�� ���� �ʴ� ���(������)
	int x;

	printf("���� �Է�(1~5) : ");
	scanf("%d", &x);

	switch (x) {
		case 5: printf("* * * * * \n"); 
		case 4: printf("* * * * \n"); 
		case 3: printf("* * * \n");
		case 2: printf("* * \n");
		case 1: printf("* \n\n");
			break;
		default: printf("\n1 ~ 5������ �Է��Ͻʽÿ�.\n\n"); 
	}
	/*
		case���� å���� ���� �ϴ� ��
		���ǰ��� �ش��ϴ� case�� ��ġ�� ���� break; ���� ������ 
		�Ǵ� } �ڵ� ����� ���� �� ���� �����
	*/

	printf("\n\n----------------------------------------------------\n\n");

	// ����� level�� ���� ���� �ο�(level 0 > 1 > 2 ������ ����)
	int level;

	printf("���� �Է�(0~2) : ");
	scanf("%d", &level);

	switch (level) {
	case 0: printf("delete ���� ���� \n");
	case 1: printf("write ���� ���� \n");
	case 2: printf("read ���� ���� \n");
		break;
	default: printf("\n0~2������ �Է��Ͻʽÿ�.\n\n");
	}


	return 0; //�ü������ 0�� ��ȯ : ���α׷� ���� ����
}