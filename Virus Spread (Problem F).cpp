#include<stdio.h>

int main()
{
	long long int N,M,total = 1;
	scanf("%lld %lld",&N,&M);
	for(long long int i=1;i<=N;i++)
	{
		total  = total * 2;
	}
	printf("%lld\n",total%M);
}
