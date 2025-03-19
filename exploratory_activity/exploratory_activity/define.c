/* C��� Ž��Ȱ�� 1��
 * �̸� : �ָ���
 * ��¥ : 2025-03-19
 * ���� : #define�� �̿��� ��ȣ��� 10���� �����Ͽ� ���α׷��� ���弼��.
 * ���α׷� ���� : #define���� ������ ��ȣ ��� 10���� �̿��� �ڱ�Ұ���
 * ����ڿ��� ������ ���� ������ Ƚ���� �Է¹޾� �׿� ���� ���� �µ� �� �� ���� ���� ����� �����ϴ� ���α׷�.
*/

#define _CRT_SECURE_NO_WARNINGS //-> scanf()�Լ� ���� �߻��ϴ� ���� ������ �߰���.
#include <stdio.h> // ��ó���� ������ - ǥ�� ����� ��� ���� 
#define MY_NAME "�ָ���" //#define�� �̿��� ��� ���� 1
#define MAJOR "��ǻ�Ͱ��а�" // 2
#define FAVORITE_COURSE "C���" // 3
#define I_WANT "���ϰ� �ͽ��ϴ�!" // 4
#define LECTURE 'C' // 5
#define GOOD_GRADE "A+" // 6
#define BAD_GRADE "���� ����" // 7
#define YEAR 2025 // 8
#define MONTH 3 // 9
#define DAY 19 // 10

int main(void) {

	const char good_attitude[] = "������ ���";
	const char normal_attitude[] = "���";
	const char bed_attitude[] = "��������";
	char* my_attitude = "?";
	int study_date = 0;
	char* my_grade = "?";

	// �ڱ�Ұ� ���
	printf("----------------------------------------------\n\n");
	printf("�ȳ��ϼ���. ���� %s�Դϴ�. \n", MY_NAME); // 1
	printf("���� ������ %s�Դϴ�. \n", MAJOR); // 2
	printf("���� �����ϴ� ������ %s�Դϴ� \\(^__^)/ \n", FAVORITE_COURSE); // 3 
	printf("���� %c�� %s \n", LECTURE, I_WANT); // 4, 5 
	printf("���� %s�Ͽ� %s�� �ް� �ͽ��ϴ�. \n", good_attitude, GOOD_GRADE);
	printf("�����մϴ� ����\n");
	printf("���� ��¥ : %4d�� %2.2d�� %2.2d��\n\n", YEAR, MONTH, DAY); // 8, 9, 10
	printf("----------------------------------------------\n\n");

	// �����ϰ� ���� Ƚ���� ���� ���� �µ� �� �� ���� ���� ����
	while(1){ // ���� ���� - (�Է� ������ ������ �ݺ�)
		// �Է� �ȳ��� ���
		printf("������ ���� ���θ� �� �� �߳���? (0 ~ 7 ������ �Է� ����) \n\n");
		
		//���� if�� - scanf �Լ��� �Է°��� ���������� �о����� Ȯ��
		if (scanf("%d", &study_date) == 1) { // ����ڿ��� ���� �Է� �ް� ���� �� if�� ����

			// 0~7 �Է� �� Ȯ��
			if (study_date >= 0 && study_date < 8) { 
				break; // while �ݺ��� ����
			} else { 
				// 0~7 ������ ���� �ƴϸ� ���� �޽��� ���
				printf("\n�߸��� �Է��Դϴ�. 0 ~ 7 ������ �����θ� �Է����ּ���.\n\n");
				printf("----------------------------------------------\n\n");
			}
		
		} else { // ���ڰ� �ƴ� ���� �Է����� ��� ���� �޽��� ���
			printf("\n�߸��� �Է��Դϴ�. 0 ~ 7 ������ �����θ� �Է����ּ���.\n\n");
			printf("----------------------------------------------\n\n");
			while (getchar() != '\n'); // �߸��� �Է� �� ���� ����
		}
	}


	printf("\n�Է��� ���� Ƚ�� : %d�� \n\n", study_date);
	
	// ���� ��¥�� ���� �µ� ����
	if (study_date >= 0 && study_date < 2) {
		my_attitude = bed_attitude;  // 0 ~ 1���� ��������
	}
	else if (study_date >= 2 && study_date < 5) {
		my_attitude = normal_attitude;  // 2 ~ 4���� ���
	}
	else {
		my_attitude = good_attitude;  // 5�� �̻��� ������ ���
	}

	// ���� �µ��� ���� ���� ����
	my_grade = (my_attitude == good_attitude) ? GOOD_GRADE : BAD_GRADE;

	// ���� �µ��� ���� ���
	printf("�� : ����� ���� �µ��� %s���� ���� ������ %s�Դϴ�. \n\n", my_attitude, my_grade);
	printf("----------------------------------------------\n\n");

	return 0;
}
