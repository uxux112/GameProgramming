/*
�ۼ��� : 2025-02-24
�ۼ��� : �谡��
���� : �ڵ��� �帧 ����
*/

/*
���������� ������� �ڵ尡 ����ȴ�.
main �Լ��� ������ �߰�ȣ�� �ٴٸ��� ���α׷��� ����ȴ�.
F9 = �� �ڵ忡������ ����
F11 = ���� �ڵ� ����
*/

/*
���ǹ�, �б�, branch
if, else, for
() : ����
{} : ��ü

������ ��
if(); {}
*/

/*
¦�� : n % 2 == 0
Ȧ�� : n % 2 == 1

if = ����
else = ������ ��� �͵�
*/

#include <stdio.h>

#include <stdlib.h>
#include <time.h>


int main()
{
	printf("���ǹ� ����1\n");

	//int : ������ �����ϴ� ����, 4����Ʈ

	int count = 15;
	if (count < 10)
	{
		printf("count���� 10���� �۽��ϴ�.\n");
	}
	else
	{
		printf("count���� 10���� Ů�ϴ�\n");
	}



	printf("���ǹ� ����2\n");

	int score = 9;

	if (score >= 100)
	{
		printf("S���, ���� ���� : %d\n", score);
	}
	else if (score >= 90)
	{
		printf("A���, ���� ���� : %d\n", score);
	}
	else
	{
		printf("F���, ���� ���� : %d\n", score);
	}



	printf("���ǹ� ����3\n ���� ���� ���߱� ����\n ������ ���� 0~100\n");
	
	srand(time(NULL));
	int randomNumber = rand() % 101;
	int user = 0;
	//printf("%d", randomNumber);
	scanf_s("%d", &user);

	
	if (randomNumber > user)
	{
		printf("�� ���� ���ڸ� ���ϼ̽��ϴ�\n");
	}
	else if (randomNumber == user)
	{
		printf("�����Դϴ�\n");
	}
	else if (randomNumber < user)
	{
		printf("�� ū ���ڸ� ���ϼ̽��ϴ�\n");
	}
	printf("random�� ���� %d �����ϴ�\n", randomNumber);




	printf("switch ����4\n");

	int countNumber = 1;

	switch (countNumber)
	{
	case 1: printf("S��ũ �Դϴ�.\n"); 
		break;
	case 2: printf("A��ũ �Դϴ�.\n");
		break;
	case 3: printf("B��ũ �Դϴ�.\n");
		break;
	case 4:	printf("C��ũ �Դϴ�.\n");
		break;
	}



	printf("���� ����5\n");
	
	int a = 50;
	int b = 30;

		
	if (a >= 100)
		
	{
		printf("S�Դϴ�\n");
	}
	else if (a >= 50)
	{
		printf("A�Դϴ�\n");
	}
	else
	{
		printf("F�Դϴ�\n");
	}


	if (a > b)
	{
		printf("a�� ������ b���� �����ϴ�\n");
	}
	else if (a == b)
	{
		printf("a�� ������ b�� ������ �����ϴ�\n");
	}
	else
	{
		printf("a�� ������ b���� �����ϴ�\n");
	}
}