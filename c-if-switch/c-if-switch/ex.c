/* 2025-04-08
 if���� switch������ �ٲٰ�(�׻� ����), switch���� if������ �ٲٱ�(�Ϻ� ����, switch�� ���� ǥ���� ��ƴ�)
*/
#define _CRT_SECURE_NO_WARNINGS //VS���� scanf() ��� ������ �����
#include <stdio.h>

int main(void) {
	
	/* ����1 : 1~5���� �Է� �޾� �޴� ���� */

	int menu;
	
	printf("**********************************\n");
	printf("���� �޴��� ��ȣ�� �����ϼ���\n");
	printf("1. ���� \n");
	printf("2. ������ \n");
	printf("3. ���� \n");
	printf("4. ���� \n");
	printf("5. �� \n");
	printf("**********************************\n");

	printf("\n�޴� ����(1~5) :  ");
	scanf("%d", &menu);

	//if��
	if(menu == 1){
		printf("\n 1. ���� ���� \n\n");
	} else if(menu == 2){
		printf("\n 2. ������ ���� \n\n");
	} else if(menu == 3){
		printf("\n 3. ���� ���� \n\n");
	} else if(menu == 4){
		printf("\n 4. ���� ���� \n\n");
	} else if(menu == 5){
		printf("\n 5. �� ���� \n\n");
	} else {
		printf("\n error \n\n");
	}

	//switch��
	switch(menu){
		case 1 : printf("\n 1. ���� ���� \n\n");
			break;
		case 2 : printf("\n 2. ������ ���� \n\n");
			break;
		case 3 : printf("\n 3. ���� ���� \n\n");
			break;
		case 4 : printf("\n 4. ���� ���� \n\n");
			break;
		case 5 : printf("\n 5. �� ���� \n\n");
			break;
		default : printf("\n error \n\n");
	}

	printf("\n ---------------------------------------------------- \n\n");

	/* ����2 : 1~5 �Է� �޾� ¦��/Ȧ���� ���� */

	int num;

	printf("���� �Է�(1~5) :  ");
	scanf("%d", &num); //scanf()�� �޸� �ּҷ� ���������ؼ� ������ �� ����. &�ּ� ������ ����ؾ���

	//switch��
	switch(num){
		case 1 :
		case 3 : 
		case 5 : printf("\n %d : Ȧ�� \n\n", num);
			break;
		case 2 :
		case 4 : printf("\n %d : ¦�� \n\n", num);
			break;
		default : printf("\n error : 1 ~ 5������ �����մϴ�. \n\n");
	}

	//if��
	if (num % 2 == 0) { // �Ϲ�������, 0 ¦���� ó����
		printf("\n %d : ¦�� \n\n", num);
	} else {
		printf("\n %d : Ȧ�� \n\n", num);
	}

	printf("\n ---------------------------------------------------- \n\n");

	/* ����3 : ���� �ϳ��� �Է� �޾� ¦��/Ȧ���� ���� */

	// switch��
	switch (num % 2) {
		case 0 : printf("\n %d : ¦�� \n\n", num);
			break;
		case 1 : printf("\n %d : Ȧ�� \n\n", num);
			break;
		default : printf("\n error : ������ �Է��ϼ���. \n\n");
	}

	printf("\n ---------------------------------------------------- \n\n");

	/* ����4 : �� ���� �Է� �޾� ū ��/���� ���� ���� */

	int x;
	int y;

	printf("ù��° ���� �Է� :  ");
	scanf("%d", &x);

	printf("�ι�° ���� �Է� :  ");
	scanf("%d", &y);

	//if��
	if (x > y) {
		printf("ū �� : %d , ���� �� : %d \n\n", x, y);
	} else if(x < y) {
		printf("ū �� : %d , ���� �� : %d \n\n", y, x);
	} else if (x == y) {
		printf("%d �� %d�� �����ϴ�. \n\n", x, y);
	} else {
		printf("error \n\n");
	}

	//switch�����δ� ǥ�� �Ұ�
	/* Ư�� ���� ���� �б� -> switch��
	   ����, ũ�� �� -> if��
	*/


	return 0;
}