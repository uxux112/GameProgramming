/*
�ۼ��� : 2025-02-18
�ۼ��� : �谡��
���� : ������ ���� ����
*/

/*
������ �̸� ��Ģ
1. ���ڴ� ���� �� �ֵ� ù ���ڿ� �� �� ����.
2. �̸��� Ư����ȣ�� �� �� ���� (����ٴ� ����)
3. �̸� ���̿� ���鹮�ڰ� �� �� ����.
4. Ű����� �̸����� ����� �� ����.
*/

#include <stdio.h>

int main()
{
	int attackPower;
	//���� ���ݷ� ���� : attackPower = �⺻ ���ݷ� + ������ ���� * ���� ���
	int basicPower = 10;
	int weaponLave1 = 1;
	int growthPower = 3;

	attackPower = basicPower + weaponLave1 * growthPower;

	//attackPower = 10;
	float _attackPower;
	_attackPower = 10.5;

	printf("������ �̸� : %s, ������ ���� : %d, ���� ���� Ȯ�� : %f\n", "�ռҵ�", weaponLave1, 0.8);

	printf("��ȭ�� �����Ͽ����ϴ�. ������ ���ݷ��� �����Ͽ����ϴ�.\n");

	printf("��ȭ �Ŀ� ������ ���ݷ��� %d�� �Ǿ����ϴ�\n\n\n\n", attackPower);



	//���� ����
	//�簢���� ���̸� ���ϴ� ����
	//������ �����͸� ����, width(����), height(����)
	//���� = ���� * ����

	printf("���� ����1 : �簢�� ���̸� ����ϴ� ������ �ܼ�â�� ����غ�����.\n");
	int width = 0, height = 0;

	printf("������ ���̸� �Է����ּ���.\n");
	scanf_s("%d", &width);
	printf("������ ���̸� �Է����ּ���.\n");
	scanf_s("%d", &height);

	int extent = width * height;

	printf("�簢���� ���̴� %d �Դϴ�.", extent);

}