#include <stdio.h>
long factorial(int n){
	printf("factorial(%d)\n", n);
	if (n <= 1) return 1;
	else return n * factorial(n - 1);
}
int main(void)
{
	int n;
	long f;
	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &n);
	f = factorial(n);
	printf("%d!�� %d�Դϴ�. \n", n, f);
	return 0;
}