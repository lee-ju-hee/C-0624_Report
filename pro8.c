#include <stdio.h>
struct subject
{
	int english; // ���������� ������ ���
};
void input_data(struct subject *sub)
{
	int i;

	do
	{
		for(i = 0; i < 5; i++)
		{
			printf("���������� �Է��ϼ���\n");
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
		printf("%d��\n", (sub+i)->english);
	}
}
int main()
{
	struct subject Score[5]; // ����ü�迭 ����

	input_data(Score); // �Է��ϴ� �Լ� ȣ��
	printScore(Score);
	return 0;
}



