/*整数加算の実行（キーボード入力）*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int quotient = 0;
	int modResult = 0;

	printf("aの値を入力してください\n");
	scanf_s("%d", &a);

	printf("aの値の確認=%d\n", a);
	printf("bの値を入力してください\n");
	
	scanf_s("%d", &b);
	printf("bの値の確認=%d\n", b);
	
	c = int(pow(a, 3) + pow(b, 4));
	quotient = c / 8;
	modResult = c % 8;
	
	printf("商 %d\n", quotient);
	printf("余り %d\n", modResult);
}

