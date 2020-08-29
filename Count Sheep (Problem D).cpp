#include<stdio.h>

int main()
{
	int N,panjang = 0;
	int putih = 0,hitam = 0,jumlahHitam = 0;
	char S[1000005];
	
	scanf("%d",&N);
	for(int i=0; i < N ; i++)
	{
		scanf("%s",&S);
		while (S[panjang] != '\0')
       	{
        	panjang++;
       	}
		for(int j=0 ; j < panjang ; j++)
		{
			if(S[j]=='W')
			{
				putih++;
			}
			else if(S[j]=='B')
			{
				hitam++;
			}
			if(hitam==2)
			{
				hitam = hitam/2;
				jumlahHitam = jumlahHitam + 1;
				hitam = 0;
				if(putih < 1)
				{
					putih = putih;
				}
				else
				{
					putih = putih - jumlahHitam;
				}
			}
		}
		
		if(putih < 10)
		{
			printf("Case #%d: Jojo stayed awake\n",i+1);
		}
		else
		{
			printf("Case #%d: Jojo fall asleep\n",i+1);
		}
		panjang = 0; putih = 0; hitam = 0; jumlahHitam = 0;
	}
}
