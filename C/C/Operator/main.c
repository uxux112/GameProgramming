/*
�ۼ��� : 2025-02-19
�ۼ��� : �谡��
���� : ������ �ǽ�
*/

/*
��� ������(��Ģ����)
+, -, *, /, %

���� ������
��ȣ : +, - (���, ����)   -10, +10

���� ������
num1 + num2

���� ������

�� ������
> , < , ==

��Ʈ ������

���� ������
||, && (or, and)
*/

/*
#include <> (�ý��� ����)
#include "" (Ŀ���� ����)
*/


#include <stdio.h>
#include <stdbool.h>

int main()
{
	printf("������ �ǽ�1\n");

	int num1 = 10;
	int num2 = 3;

	//����
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	//����
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	//����
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	//������
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	//������
	printf("%d ������ %d = %d\n", num1, num2, num1 % num2);

	
	printf("�ǽ�2\n");

	printf("�� ��� num1 > num2 : %d\n", num1 > num2); //��, true, (1)
	printf("�� ��� num1 < num2 : %d\n", num1 < num2); //����, false, (0)


	printf("�ǽ�3 : ���� ������\n");
	bool isTrue = true;
	bool isFalse = false;

	int result1 = num1 > num2;

	printf("���� ������ ��� ��� : %s\n", result1 ? "true" : "false");
	printf("���� ������ ��� ��� : %d\n", result1 ? 1 : 0);


	printf("�ǽ�4 : ���� ������\n");

	printf("���� ������ : %d\n", (num1 != num2) || (num1 < num2)); // != (�� ���� �ٸ� ��) or
	printf("���� ������ : %d\n", (num1 != num2) && (num1 < num2)); // != (�� ���� �ٸ� ��) and


	printf("�ǽ�5 : ���� ������\n");

	int num3 = 2;
	int num4 = 5;
	num3 += num4; //num3 = num3 + num4 �� ����.
	printf("num3 + num4�� �� : %d\n", num3);


	printf("�ǽ�6 : ���� ������, ���� ������\n");
	
	printf("num3�� �� : %d\n", num3++);
	printf("num4�� �� : %d\n\n\n\n\n", ++num4);

	int sodLevel = 1;
	int sodAttackPower = 3;

	printf("���� ���� ���� : %d, ���� ���� ���ݷ� : %d\n", sodLevel, sodAttackPower);
	printf("��ȭ�� �����߽��ϴ�.\n");
	sodLevel++;
	sodAttackPower = sodLevel * sodAttackPower;
	printf("��ȭ�� ���� ���� : %d, ��ȭ�� ���� ���ݷ� : %d\n\n", sodLevel, sodAttackPower);

	

	int maxInventorySlot = 10;
	int AStackCount = 99;
	int BStackCount = 99;

	int ADrop = 322;
	int BDrop = 127;

	printf("1�ð� ���� ����� �Ͽ� �������� ȹ���߽��ϴ�.\n");
	printf("A������ : %d, B������ : %d ȹ��.\n", ADrop, BDrop);

	int AInventoryCount = (ADrop % AStackCount) == 0 ? (ADrop / AStackCount) : (AStackCount / ADrop) + 1;
	int BInventoryCount = (BDrop % BStackCount) == 0 ? (BStackCount / BDrop) : (BStackCount / BDrop) + 1;

	printf("��� : %s\n", maxInventorySlot <= (AInventoryCount + BInventoryCount) ? "������" : "�������");
}