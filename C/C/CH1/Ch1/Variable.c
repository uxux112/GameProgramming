//�ּ�
/*�ּ�*/

#include <stdio.h>

int main()
{
	char player = 'a';
	char enemy = 'b';

	int playerAttackPwoer = 5;
	int enemyAttackPower = 3;

	//player : �г���(���ڿ�) - apple
	//enemy : ���� �̸�(���ڿ�) - cherry
	//player's attackpower : �÷��̾��� ���ݷ�(����) - 8
	//enemy's attackpower : ������ ���ݷ�(����) - 5

	printf("%c �� %c �� ��򰡿��� �������ϴ�.\n", player, enemy);
	printf("%c �� ���� %c �� �߰����� ���߽��ϴ�.\n", enemy, player);
	printf("%c �� %c �� �����Ͽ� %d ��ŭ �������� �������ϴ�.\n", player, enemy, playerAttackPwoer);
	printf("%c �� %c �� ���� �����Ͽ� %d �� %d.\n", player, enemy, playerAttackPwoer, enemyAttackPower);

	char char1 = 'a';
	int int1 = 10;
	float float1 = 0.8f;

	printf("���ڿ� ��� : %c\n", char1);
	printf("���� ��� : %d\n", int1);
	printf("�Ǽ� ��� : %f\n", float1);
	printf("���ڿ� ��� : %s\n", "���");

	return 0;
}