/*
작성일 : 2025-02-24
작성자 : 배가언
주제 : 코드의 흐름 제어
*/

/*
위에서부터 순서대로 코드가 실행된다.
main 함수의 마지막 중괄호에 다다르면 프로그램에 종료된다.
F9 = 이 코드에서부터 멈춤
F11 = 다음 코드 실행
*/

/*
조건문, 분기, branch
if, else, for
() : 조건
{} : 몸체

주의할 점
if(); {}
*/

/*
짝수 : n % 2 == 0
홀수 : n % 2 == 1

if = 조건
else = 나머지 모든 것들
*/

#include <stdio.h>

#include <stdlib.h>
#include <time.h>


int main()
{
	printf("조건문 예제1\n");

	//int : 정수를 저장하는 변수, 4바이트

	int count = 15;
	if (count < 10)
	{
		printf("count값이 10보다 작습니다.\n");
	}
	else
	{
		printf("count값이 10보다 큽니다\n");
	}



	printf("조건문 예제2\n");

	int score = 9;

	if (score >= 100)
	{
		printf("S등급, 현재 점수 : %d\n", score);
	}
	else if (score >= 90)
	{
		printf("A등급, 현재 점수 : %d\n", score);
	}
	else
	{
		printf("F등급, 현재 점수 : %d\n", score);
	}



	printf("조건문 예제3\n 랜덤 숫자 맞추기 게임\n 숫자의 범위 0~100\n");
	
	srand(time(NULL));
	int randomNumber = rand() % 101;
	int user = 0;
	//printf("%d", randomNumber);
	scanf_s("%d", &user);

	
	if (randomNumber > user)
	{
		printf("더 작은 숫자를 말하셨습니다\n");
	}
	else if (randomNumber == user)
	{
		printf("정답입니다\n");
	}
	else if (randomNumber < user)
	{
		printf("더 큰 숫자를 말하셨습니다\n");
	}
	printf("random의 값은 %d 였습니다\n", randomNumber);




	printf("switch 예제4\n");

	int countNumber = 1;

	switch (countNumber)
	{
	case 1: printf("S랭크 입니다.\n"); 
		break;
	case 2: printf("A랭크 입니다.\n");
		break;
	case 3: printf("B랭크 입니다.\n");
		break;
	case 4:	printf("C랭크 입니다.\n");
		break;
	}



	printf("예제 문제5\n");
	
	int a = 50;
	int b = 30;

		
	if (a >= 100)
		
	{
		printf("S입니다\n");
	}
	else if (a >= 50)
	{
		printf("A입니다\n");
	}
	else
	{
		printf("F입니다\n");
	}


	if (a > b)
	{
		printf("a의 점수가 b보다 높습니다\n");
	}
	else if (a == b)
	{
		printf("a의 점수와 b의 점수가 같습니다\n");
	}
	else
	{
		printf("a의 점수가 b보다 낮습니다\n");
	}
}