#include <stdio.h>
int main()
{
    int n, firstDigit, lastDigit,mod;

    scanf("%d", &n);

    for(int i=1; i>0; i++){
    	if(n<1000){
    		break;
		}
		n = n/10;
	}
	firstDigit = n / 10;
	lastDigit = n % 10;
	mod = firstDigit % lastDigit;
	printf("%d\n", mod);

    return 0;