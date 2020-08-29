#include<stdio.h>
#include<string.h>

struct data{
	char name[1005];
	int penanda;
};

struct data Data[1005];

int main(){
	int counter;
	int c = 0;
	int hasil = 0;
	scanf("%d",&counter);
	int b = 0;
	for(int b = 0; b < counter;b++){
		char nama[105];
		scanf("%s",&Data[b].name);
		Data[b].penanda = -1;
 	}
	for(int d = 0; d < counter;d++){
		c = 1;
		for(int k = d+1; k < counter;k++){
   		if(strcmp(Data[d].name,Data[k].name)==0){
    		c++;
    		Data[k].penanda = false;
   		}
	}
	if(Data[d].penanda!= false){
		Data[d].penanda = c;
  	}
 }
	for(int i = 0; i < counter;i++){
		if(Data[i].penanda!=0){
			if(Data[i].penanda>1){
				hasil++;
			}
  		}
 	}
	printf("You have %d duplicate name(s).\n",hasil);
 	return 0;
}
