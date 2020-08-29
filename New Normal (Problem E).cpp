#include<stdio.h>

int main()
{
	int N,C,total = 0;
	
	scanf("%d %d",&N,&C);
	if(C%2==1)
	{
		printf("%d\n",((C+1)/2)*N);
	}
	else
	{
		printf("%d\n",(C/2)*N);
	}
}
