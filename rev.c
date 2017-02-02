#include <stdio.h>

int main(void) {
	// your code goes here
	int n,a,re=0;
	scanf("%d",&n);
	while(n>0)
	{
		a=n%10;
		n=n/10;
		re=re*10+a;
	}
	printf("%d",re);
	return 0;
}
