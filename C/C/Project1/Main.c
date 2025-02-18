/*
작성일 : 2025-02-18
작성자 : 배가언
주제 : 변수에 대한 이해
*/

/*
변수의 이름 규칙
1. 숫자는 넣을 수 있되 첫 글자에 쓸 수 없다.
2. 이름에 특수기호가 들어갈 수 없다 (언더바는 가능)
3. 이름 사이에 공백문자가 들어갈 수 없다.
4. 키워드는 이름으로 사용할 수 없다.
*/

#include <stdio.h>

int main()
{
	int attackPower;
	//무기 공격력 공식 : attackPower = 기본 공격력 + 무기의 레벨 * 성장 계수
	int basicPower = 10;
	int weaponLave1 = 1;
	int growthPower = 3;

	attackPower = basicPower + weaponLave1 * growthPower;

	//attackPower = 10;
	float _attackPower;
	_attackPower = 10.5;

	printf("무기의 이름 : %s, 무기의 레벨 : %d, 무기 성공 확률 : %f\n", "롱소드", weaponLave1, 0.8);

	printf("강화가 성공하였습니다. 무기의 공격력이 증가하였습니다.\n");

	printf("강화 후에 무기의 공격력이 %d이 되었습니다\n\n\n\n", attackPower);



	//예제 문제
	//사각형의 넓이를 구하는 문제
	//정수형 데이터를 선언, width(가로), height(세로)
	//넓이 = 가로 * 세로

	printf("예제 문제1 : 사각형 넓이를 출력하는 내용을 콘솔창에 출력해보세요.\n");
	int width = 0, height = 0;

	printf("가로의 길이를 입력해주세요.\n");
	scanf_s("%d", &width);
	printf("세로의 길이를 입력해주세요.\n");
	scanf_s("%d", &height);

	int extent = width * height;

	printf("사각형의 넓이는 %d 입니다.", extent);

}