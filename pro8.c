#include <stdio.h>
struct subject
{
	int english; // 영어점수를 저장할 멤버
};
void input_data(struct subject *sub)
{
	int i;

	do
	{
		for(i = 0; i < 5; i++)
		{
			printf("영어점수를 입력하세요\n");
			scanf("%d", &(sub+i) ->english);
		}
		printf("\n");
	}
	while(i < 5);
	
	
}

void printScore(struct subject *sub)
{
	int i;
	for(i = 0; i < 5; i++)
	{
		printf("%d점\n", (sub+i)->english);
	}
}
int main()
{
	struct subject Score[5]; // 구조체배열 선언

	input_data(Score); // 입력하는 함수 호출
	printScore(Score);
	return 0;
}



