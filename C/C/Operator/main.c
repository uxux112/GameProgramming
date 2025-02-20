/*
작성일 : 2025-02-19
작성자 : 배가언
주제 : 연산자 실습
*/

/*
산술 연산자(사칙연산)
+, -, *, /, %

단항 연산자
부호 : +, - (양수, 음수)   -10, +10

이항 연산자
num1 + num2

삼항 연산자

비교 연산자
> , < , ==

비트 연산자

관계 연산자
||, && (or, and)
*/

/*
#include <> (시스템 파일)
#include "" (커스텀 파일)
*/


#include <stdio.h>
#include <stdbool.h>

int main()
{
	printf("연산자 실습1\n");

	int num1 = 10;
	int num2 = 3;

	//덧셈
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	//뺄셈
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	//곱셈
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	//나눗셈
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	//나머지
	printf("%d 나머지 %d = %d\n", num1, num2, num1 % num2);

	
	printf("실습2\n");

	printf("비교 결과 num1 > num2 : %d\n", num1 > num2); //참, true, (1)
	printf("비교 결과 num1 < num2 : %d\n", num1 < num2); //거짓, false, (0)


	printf("실습3 : 삼항 연산자\n");
	bool isTrue = true;
	bool isFalse = false;

	int result1 = num1 > num2;

	printf("삼항 연산자 결과 출력 : %s\n", result1 ? "true" : "false");
	printf("삼항 연산자 결과 출력 : %d\n", result1 ? 1 : 0);


	printf("실습4 : 관계 연산자\n");

	printf("관계 연산자 : %d\n", (num1 != num2) || (num1 < num2)); // != (두 수가 다를 때) or
	printf("관계 연산자 : %d\n", (num1 != num2) && (num1 < num2)); // != (두 수가 다를 때) and


	printf("실습5 : 복합 연산자\n");

	int num3 = 2;
	int num4 = 5;
	num3 += num4; //num3 = num3 + num4 와 같다.
	printf("num3 + num4의 값 : %d\n", num3);


	printf("실습6 : 후위 연산자, 전위 연산자\n");
	
	printf("num3의 값 : %d\n", num3++);
	printf("num4의 값 : %d\n\n\n\n\n", ++num4);

	int sodLevel = 1;
	int sodAttackPower = 3;

	printf("현재 무기 레벨 : %d, 현재 무기 공격력 : %d\n", sodLevel, sodAttackPower);
	printf("강화에 성공했습니다.\n");
	sodLevel++;
	sodAttackPower = sodLevel * sodAttackPower;
	printf("강화된 무기 레벨 : %d, 강화된 무기 공격력 : %d\n\n", sodLevel, sodAttackPower);

	

	int maxInventorySlot = 10;
	int AStackCount = 99;
	int BStackCount = 99;

	int ADrop = 322;
	int BDrop = 127;

	printf("1시간 동안 사냥을 하여 아이템을 획득했습니다.\n");
	printf("A아이템 : %d, B아이템 : %d 획득.\n", ADrop, BDrop);

	int AInventoryCount = (ADrop % AStackCount) == 0 ? (ADrop / AStackCount) : (AStackCount / ADrop) + 1;
	int BInventoryCount = (BDrop % BStackCount) == 0 ? (BStackCount / BDrop) : (BStackCount / BDrop) + 1;

	printf("결과 : %s\n", maxInventorySlot <= (AInventoryCount + BInventoryCount) ? "가득참" : "가득안참");
}