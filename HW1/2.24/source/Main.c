
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;

	printf("請輸入一個整數: ");
	scanf("%d", &num);

	printf("\n");

	if (num % 2 == 0)
	{
		printf("%d 是偶數\n", num);
	}
	else
	{
		printf("%d 是奇數\n", num);
	}

	system("pause");
	return 0;
}