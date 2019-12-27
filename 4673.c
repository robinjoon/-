#include <stdio.h>
int d(int n) // 문제에서 정의한 d(n) 함수.
{
	int sum = n;
	while (n)
	{
		sum = sum + n%10;
		n = n / 10;
	}
	return sum;
}
int main()
{
	int number[10000] = { 0, };
	int i, j;
	int a;
	for (i = 0; i < 10000; i++) // 1부터 9999 까지 저장된 배열을 만듬
		number[i] = i + 1;
	for (i = 0; i < 10000; i++)
	{
		a = d(i); // a 는 셀프넘버가 아님. a는 i를 생성자로 가짐.
		for (j = 0; j < 10000; j++)
		{
			if (a == j + 1)number[j] = 0; // 생성자가 있는 숫자인 걸로 확인 된 인덱스의 원소를 0으로 만듬
		}
	}
	for (i = 0; i < 10000; i++)
	{
		if (number[i] != 0)printf("%d\n", number[i]); // 위의 과정이 완료되면, 배열의 여러 원소중 0이 아닌 수는 셀프넘버가 됨.
	}
	return 0;
}