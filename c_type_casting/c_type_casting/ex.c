/*2025-04-03
��������ڿ� ����ȯ�� Ȱ�� ����
*/

#include <stdio.h>

int main(void) {
	
	int oprand1 = 7;
	int oprand2 = 5;

	/* ��� ������ - ���� ���� */
	// ���� ���� ������ ����� ����

	printf("%d + %d = %5d \n", oprand1, oprand2, (oprand1 + oprand2));
	printf("%d - %d = %5d \n", oprand1, oprand2, (oprand1 - oprand2));
	printf("%d * %d = %5d \n", oprand1, oprand2, (oprand1 * oprand2));
	printf("%d / %d = %5d \n", oprand1, oprand2, (oprand1 / oprand2));
	printf("%d %% %d = %5d \n\n", oprand1, oprand2, (oprand1 % oprand2));

	// �̰� ���ٴ� ������ �ִ� ���� �� �ڵ� �������� ����

	int sum_result = oprand1 + oprand2;
	int sub_result = oprand1 - oprand2;
	int multi_result = oprand1 * oprand2;
	//int div_result = oprand1 / oprand2;
	int mod_result = oprand1 % oprand2;

	printf("%d + %d = %5d \n", oprand1, oprand2, sum_result);
	printf("%d - %d = %5d \n", oprand1, oprand2, sub_result);
	printf("%d * %d = %5d \n", oprand1, oprand2, multi_result);
	//printf("%d / %d = %5d \n", oprand1, oprand2, div_result);
	printf("%d %% %d = %5d \n\n", oprand1, oprand2, mod_result);
	// ���������� %�� �νĵǼ� ���� �״�� %����Ϸ��� %% �����

	// ����, ������(/) ���꿡�� ������ ����
	// ���� ���� ������ ����� �����̱� ������ �Ҽ��� ���� �ڸ��� ǥ���� �ȵ�(�����) 

	/* �ذ� */

	double div_result = (double) oprand1 / oprand2;
	// ����) ������ ���� Casting �ؾ� ��
	// �׷��� �Ǽ� / ���� ���°� �Ǿ �� ū Ÿ������ �����ؼ� ��� �ȴ�
	// ���� ���� / ���� ���� ����� �� ����ȯ(Casting)�ϸ� �̹� �Ҽ��� ������ �ڿ��� �ҿ��� ����
	// ������ �켱 �������� ������꺸�� ����ȯ�� �� ���� 
	// (double) oprand1�� ���� �ǰ� / oprand2�� ����

	printf("%d / %d = %5.1f \n\n", oprand1, oprand2, div_result); //__1.4
	// %5.1 : ����������(��ü����ڸ���) 5ĭ,���е� ���� �Ҽ������� 1�ڸ����� ����ض�
	// �Ҽ��� . �� ��ü����ڸ����� ���Ե�

	/* �ڵ� ����ȯ - �ø� ��ȯ : ������ ����� �Ǽ��� ������ ���� ���� */

	// �Ǽ� Ÿ�� ������ ������ �Ҵ��ϸ�
	// �ڵ� ����ȯ�Ǽ� �Ǽ� �����ͷ� ������ ������,
	// ���� / ������ �Ǽ��� ������ Ÿ�Կ� ��´ٰ� �ص�
	// ������ �켱 �������� = ���� ������ ���� / ��������� �� �켱 ������ ���� ������
	// ������(/) ������ ���� ����Ǿ� �Ҽ��� ���ϰ� ����� ���� 
	// �ڵ� ����ȯ �ż� ������ �Ǵ°ű� ������ 
	// �� ��쿣 ������(/) ������ ����� �ȳ��´�.

	double a = 10 + 3;
	double b = 10 - 3;
	double c = 10 * 3;
	double d = 10 / 3; //-> ������ ���� �� �ڵ� ����ȯ �ż� ���ԵǴ� ��. �׷��� ����� ����� �ȵ�
	
	// �ذ� : 1) �ǿ����� �� �ϳ� �̻��� �Ǽ��� ����ų� 2) ���� ����ȯ�� ���ش�
	double e = 10 / 3.;
	double f = 10 / 3.0;
	// 3. �� 3.0�� ���� �ǹ�

	double g = (double) 10 / 3;

	printf("%f \n", a);
	printf("%f \n", b);
	printf("%f \n", c);
	printf("%f \n", d); // 3.000000
	printf("%f \n", e); // 3.333333
	printf("%f \n", f); // 3.333333
	printf("%f \n\n", g); // 3.333333

	/*�ڵ� ����ȯ - ���� ��ȯ : �Ǽ��� ����� ������ ������ ���� ���� */
	//���� ) ������ �ս� �߻� ����(�Ҽ��� ���� ������)

	int i = 3.14;
	printf("%d \n", i); // 3���� ��µ�(�Ҽ������� ����)

	return 0;
}