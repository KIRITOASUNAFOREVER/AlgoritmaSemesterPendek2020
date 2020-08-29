#include<stdio.h>

int main()
{
	char nama[105];
	float GPA;
	
	scanf("%[^\n]",&nama);getchar();
	scanf("%f",&GPA);
	
	printf("%s finished this semester with \"%.2f\" GPA. Congratulations!\n",nama,GPA);
}
