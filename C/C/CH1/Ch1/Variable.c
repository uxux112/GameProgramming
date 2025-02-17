//주석
/*주석*/

#include <stdio.h>

int main()
{
	char player = 'a';
	char enemy = 'b';

	int playerAttackPwoer = 5;
	int enemyAttackPower = 3;

	//player : 닉네임(문자열) - apple
	//enemy : 몬스터 이름(문자열) - cherry
	//player's attackpower : 플레이어의 공격력(숫자) - 8
	//enemy's attackpower : 몬스터의 공격력(숫자) - 5

	printf("%c 와 %c 가 어딘가에서 만났습니다.\n", player, enemy);
	printf("%c 는 아직 %c 를 발견하지 못했습니다.\n", enemy, player);
	printf("%c 가 %c 를 공격하여 %d 만큼 데미지를 입혔습니다.\n", player, enemy, playerAttackPwoer);
	printf("%c 와 %c 가 서로 공격하여 %d 와 %d.\n", player, enemy, playerAttackPwoer, enemyAttackPower);

	char char1 = 'a';
	int int1 = 10;
	float float1 = 0.8f;

	printf("문자열 출력 : %c\n", char1);
	printf("점수 출력 : %d\n", int1);
	printf("실수 출력 : %f\n", float1);
	printf("문자열 출력 : %s\n", "고블린");

	return 0;
}