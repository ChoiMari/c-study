# include <stdio.h> // ��ó���� ������, <> ǥ�� ���̺귯�� ���丮���� ã�ƶ�, ǥ�� ����� ��� ���� ����
//��ó���� ������? ������ ���� �����϶�� ���.

#define EX_RATE 1451 // ��ȣ ��� ���� 1

//�ü���� main�Լ��� ȣ���Ѵ�.
int main(void) { //void : �ƱԸ�Ʈ�� �� �޴´ٰ� ���
	
	//// ���� ���� ����
	//int iData;
	//
	//// �Ǽ��� ���� ����
	//double dData;
	//
	//// ���� ���� ����
	//char ch;

	//// ���� �ʱ�ȭ
	//iData = 50;
	//dData = 7.7;
	//ch = 'A';

	// ���� ���� & �ʱ�ȭ
	//int iData = 50;
	//double dData = 7.7;
	//char ch = 'A';
	
	//printf("iData = %8d \n", iData);
	//printf("dData = %8.2f \n", dData);
	//printf("ch    = %8c \n", ch);
	
	/* 10����, 8����, 16���� */
	//int x = 10; //10����
	//int y = 010; //8����
	//int z = 0x10; //16����

	//printf("x = %d \n", x); // decimal 
	//printf("y = %d \n", y); // octal
	//printf("z = %d \n\n", z); // hexadecimal

	//printf("%d = %d(%d) \n", x, x, 10);
	//printf("%d = %o(%d) \n", x, x, 8);
	//printf("%d = %x(%d) \n", x, x, 16);

	// ��ȣ ��� - 1) #define ����� �� 2) const �ڷ��� ����� = ��;
	int dollor1 = 10;
	int dollor2 = 100;
	int dollor3 = 1000;
	
	// ��ȣ ��� 2 - const ���
	const int EXCHANGE_RATE = 1451;
	
	//int won1 = 1451 * dollor1;
	//int won2 = 1451 * dollor2;
	//int won3 = 1451 * dollor3;
	//-> �̷��� �ۼ��ϸ� �ϵ��ڵ�... ȯ�� ������ ������ ���ľ���. �������� �ʴ� ���.
	
	int won1 = EX_RATE * dollor1;
	int won2 = EX_RATE * dollor2;
	int won3 = EX_RATE * dollor3;

	int won4 = EXCHANGE_RATE * dollor1;
	int won5 = EXCHANGE_RATE * dollor2;
	int won6 = EXCHANGE_RATE * dollor3;

	printf("%d�� = %d�޷� \n", won1, dollor1);
	printf("%d�� = %d�޷� \n", won2, dollor2);
	printf("%d�� = %d�޷� \n\n", won3, dollor3);

	printf("%d�� = %d�޷� \n", won4, dollor1);
	printf("%d�� = %d�޷� \n", won5, dollor2);
	printf("%d�� = %d�޷� \n", won6, dollor3);

	return 0; //-> �ü������ ��ȯ. ��ȯ�� 0�� �ǹ� : ���α׷� ���� ����
	// 0�� �ƴ� �ٸ� ���� ��ȯ�ϸ�, ���� ���� �߻��� �ǹ�
}