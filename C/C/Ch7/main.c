/*
�ۼ��� : 2024-02-25
�ۼ��� : �谡��
���� : �ڵ��� �帧 ���� - �ݺ���
- for �ݺ���, while �ݺ���
*/

/*
for(int i=0;; i<10; i+=2)
for(int i=0; ����(���� ���� �ݺ����� ��� �����Ѵ�); ���(i�� 2�� �߰��Ѵ�)
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
	printf("�ݺ��� ����1\n");
	// A �̸��� �������� ȹ�� - ���� - ����
	int ACount = 0;
	printf("A�������� �� : %d\n", ACount);

	// �������� 1�� ȹ���ߴ�.

	for (int i = 0; i < 10; i++)
	{
		ACount = ACount + 1;
	}

	printf("A�������� �� : %d\n", ACount);



	printf("�ݺ��� ����2\n");

	int BCount = 0;

	for (int i = 0; i < 10; i++)
	{
		BCount = BCount + i;
	}
	printf("B�������� �� : %d\n", BCount);



	printf("�ݺ��� ����3\n");

	for (int ri = 10; ri > 0; ri--)
	{
		printf("���� i�� �� : %d\n", ri);
	}

	for (;;)
	{
		printf("������ �̸� : %s", "�ռҵ�");
		int weaponLevel = 0; //������ ����
		int basePower = 10; //�⺻ ���ݷ�
		int weight = 5; //����ġ
		int attackPower = basePower + weaponLevel * weight; //������ ���ݷ� = �⺻ ���ݷ�+ ���� * ����ġ


		printf("��ȭ�� �����Ͻðڽ��ϱ�? (Y/N)\n");
		char check = ' ';
		scanf_s("%c", &check, 1);

		if (check == 'Y')
		{
			printf("��ȭ�� �����մϴ�.\n");
		}
		else if (check == 'N')
		{
			printf("��ȭ�� �׸��ΰڽ��ϴ�.\n");
		}
		else
		{
			printf("�߸��� ���� �Է��߽��ϴ�.\n");

			char another = ' ';
			scanf_s("%c", &another, 1);
			while (getchar() != '\n');

			if (another == 'Y')
			{
				printf("��ȭ�� �����մϴ�.\n");
			}
			else if (another == 'N')
			{
				printf("��ȭ�� �׸��ΰڽ��ϴ�.\n");
			}
			else
			{
				printf("�߸��� ���� �Է��߽��ϴ�.\n");
			}
		}
		break;
	}


	int xi = 0;
	while (xi < 10)  //()���ǽ� : ������ true�� �� {}����, ������ false�� �� �ݺ����� �����Ѵ�.
	{
		xi++;
		printf("xi�� �� : %d\n", xi);
	}

	//for�ݺ����� �ݺ� Ƚ���� ������������ �ۼ��ϱⰡ �� ���ϴ�
	//while�ݺ����� �� �� �ݺ��ؾ����� �� �𸣰��� ��


	int numA = 0;
	int CountA = 0;
	printf("numA�� ���� �Է����ּ��� (�� 10���� �۾ƾ� �մϴ�)\n");
	scanf_s("%d", &numA);

	while (true)
	{
		numA += 2;
		CountA++;
		if (numA > 10)
		{
			printf("�ݺ��� Ƚ�� : %d\n", CountA);
			printf("���� �� : %d\n", numA);
			break;
		}
	}



	while (numA <= 10)
	{
		numA += 2;
		CountA++;
	}
	printf("�ݺ��� Ƚ�� : %d\n", CountA);
	printf("���� �� : %d\n", numA);





}