#include <stdio.h>

int main(){
	FILE * fp;
	
	//variable declaration and initialization
	int count = 0;
	char c;
	fp = fopen("testdata.txt", "r"); 
	if(fp){
		//read file
		while ((c = getc(fp)) != EOF){
			if(c == '*')
				count++;
		}
		fclose(fp);
	}

	//variable declaration and initialization
	int k = 0;
  
	//display the star pattern
	for(int i=0; i<count; i++){
		for(int j=0; j<=i; j++){
			printf("*");
			k++;
		}
		if(k>count)
			break;
		printf("\n");
	}
	return 0;
}
