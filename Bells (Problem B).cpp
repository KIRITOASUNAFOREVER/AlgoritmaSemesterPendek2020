#include<stdio.h>

int main(){
	int input;
	scanf("%d",&input);
	int timesRang = input * 2;
	if (input >= 5)
	{
		timesRang -= 2 * (input / 5);
	}
	printf("The bells ring %d times\n",timesRang);

return 0;

}
