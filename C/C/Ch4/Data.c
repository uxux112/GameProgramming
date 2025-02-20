/*
작성일 : 2025-02-20
작성자 : 배가언
주제 : 데이터 표현 방식
*/

/*
2가지의 타입: 정수, 실수 + 문자(숫자)
int, char, short, long, longlong - 정수
float, double, decimal - 실수
*/


#include <stdio.h>

int main()
{
	int attackPower = 10 + 1 * 0.3;
	double attackPower2 = 10 + 1 * 0.3;
	printf("값 : %.2lf", attackPower2);
}