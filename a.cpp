#include<stdio.h>
int isprime (int i)
{
	int e;
	for (e=0;e<i;e++)
	{
		if (i%e!=0)
		return 0;
		else 
		return 1;
	}
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",n+1);
	printf ("%d",isprime (n));
	return 0;
}
