/*
작성일 : 2024-02-25
작성자 : 배가언
주제 : 코드의 흐름 제어 - 반복문
- for 반복문, while 반복문
*/

/*
for(int i=0;; i<10; i+=2)
for(int i=0; 조건(참일 때만 반복문을 계속 실행한다); 결과(i에 2를 추가한다)
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
	printf("반복문 예제1\n");
	// A 이름의 아이템을 획득 - 갯수 - 정수
	int ACount = 0;
	printf("A아이템의 수 : %d\n", ACount);

	// 아이템을 1개 획득했다.

	for (int i = 0; i < 10; i++)
	{
		ACount = ACount + 1;
	}

	printf("A아이템의 수 : %d\n", ACount);



	printf("반복문 예제2\n");

	int BCount = 0;

	for (int i = 0; i < 10; i++)
	{
		BCount = BCount + i;
	}
	printf("B아이템의 수 : %d\n", BCount);



	printf("반복문 예제3\n");

	for (int ri = 10; ri > 0; ri--)
	{
		printf("현재 i의 값 : %d\n", ri);
	}

	for (;;)
	{
		printf("무기의 이름 : %s", "롱소드");
		int weaponLevel = 0; //무기의 레벨
		int basePower = 10; //기본 공격력
		int weight = 5; //가중치
		int attackPower = basePower + weaponLevel * weight; //무기의 공격력 = 기본 공격력+ 레벨 * 가중치


		printf("강화를 진행하시겠습니까? (Y/N)\n");
		char check = ' ';
		scanf_s("%c", &check, 1);

		if (check == 'Y')
		{
			printf("강화를 진행합니다.\n");
		}
		else if (check == 'N')
		{
			printf("강화를 그만두겠습니다.\n");
		}
		else
		{
			printf("잘못된 값을 입력했습니다.\n");

			char another = ' ';
			scanf_s("%c", &another, 1);
			while (getchar() != '\n');

			if (another == 'Y')
			{
				printf("강화를 진행합니다.\n");
			}
			else if (another == 'N')
			{
				printf("강화를 그만두겠습니다.\n");
			}
			else
			{
				printf("잘못된 값을 입력했습니다.\n");
			}
		}
		break;
	}


	int xi = 0;
	while (xi < 10)  //()조건식 : 조건이 true일 때 {}실행, 조건이 false일 때 반복문을 종료한다.
	{
		xi++;
		printf("xi의 값 : %d\n", xi);
	}

	//for반복문은 반복 횟수가 정해져있을때 작성하기가 더 편하다
	//while반복문은 몇 번 반복해야할지 잘 모르겠을 때


	int numA = 0;
	int CountA = 0;
	printf("numA의 값을 입력해주세요 (단 10보다 작아야 합니다)\n");
	scanf_s("%d", &numA);

	while (true)
	{
		numA += 2;
		CountA++;
		if (numA > 10)
		{
			printf("반복한 횟수 : %d\n", CountA);
			printf("현재 값 : %d\n", numA);
			break;
		}
	}



	while (numA <= 10)
	{
		numA += 2;
		CountA++;
	}
	printf("반복한 횟수 : %d\n", CountA);
	printf("현재 값 : %d\n", numA);





}