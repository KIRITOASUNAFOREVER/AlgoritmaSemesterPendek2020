#include<stdio.h>
#include<string.h>

int main(){
	int Case;
	char kalimat[10001];	
	
	scanf("%d", &Case);
	getchar();
	for(int i =0; i<Case;i++)
	{
		int ascii=0;
		int count[123] = {0};
		scanf("%[^\n]", kalimat);
		getchar();
		for(int j = 0; j< strlen(kalimat); j++)
		{
			ascii = kalimat[j];
			count[ascii]++;
		}
		
		printf("Case #%d:\n",i+1);
		for(int j = 65 ; j<91; j++)
		{
			if(count[j] != 0 || count[j+32] !=0)
			{
				printf("[%c] => %d\n", j,count[j] + count[j+32]);
			}
		}
		
		for(int j = 48 ; j<58; j++)
		{
			if(count[j] != 0)
			{
				printf("[%c] => %d\n", j,count[j]);
			}		
		}
		puts("");
	}
	
	return 0;
}
