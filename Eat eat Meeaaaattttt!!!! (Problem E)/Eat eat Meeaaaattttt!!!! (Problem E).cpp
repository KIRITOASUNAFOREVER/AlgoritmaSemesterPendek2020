#include <stdio.h>
#include <string.h>

int main(){
	int c,test = 0;
	scanf("%d",&c);
	  
	// run loop for all the competitions
	for(int compete=0;compete<c;compete++){
		int p,m;
		scanf("%d %d",&p,&m);
		  
		// declare array for storing names and total scores of each individual
		char name[p][1005];
		int totalScore[p];
		  
		for(int i=0;i<p;i++)
			totalScore[i]=0;
  
		// take the inputs
		for(int participant=0;participant<p;participant++){
			scanf("%s",name[participant]);
	  
			for(int match=0;match<m;match++){
				int score=0;
				scanf("%d",&score);
				totalScore[participant]+=score;
			}
		}
  
		// sort both the arrays according to the total scores of each participant
		for(int i=0;i<p-1;i++)
			for(int j=0;j<p-i-1;j++){
				if(totalScore[j] < totalScore[j+1]){
					// swap names of participant
					char tempStr[100];
					strcpy(tempStr, name[j]);
					strcpy(name[j], name[j+1]);
					strcpy(name[j+1], tempStr);
  
					// Swap total score
					int temp = totalScore[j];
					totalScore[j] = totalScore[j+1];
					totalScore[j+1] = temp;
				}
				// if scores are same, check if lexicographically smallest name should be before
				else if(totalScore[j] == totalScore[j+1] && strcmp(name[j],name[j+1])>0){
					char temp[1005];
					strcpy(temp,name[j]);
					   strcpy(name[j],name[j+1]);
					   strcpy(name[j+1],temp);
				}
			}
			// print the rank and name of participants
			printf("Competition #%d:\n",test+1);
			for(int i=0;i<p;i++){
				printf("%d. %s",i+1, name[i]);
				printf("\n");
			}
			// new line
			printf("\n");
			test++;
	}
	return 0;
}
