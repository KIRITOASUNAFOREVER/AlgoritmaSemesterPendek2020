#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char **kunci=(char**)malloc(sizeof(char*)*100);
	char **nilai=(char**)malloc(sizeof(char*)*100);
	char **nilai_palsu=(char**)malloc(sizeof(char*)*100);
	char **sandi=(char**)malloc(sizeof(char*)*100);
	char **sandi_palsu=(char**)malloc(sizeof(char*)*100);

	char a[100],b[100],c[100],d[100],e[100],qk[100],qp[100];
	int k=0,n,q;
	scanf("%d",&n);
	for(int j=0;j<n;j++)
	{
		scanf("%s %s %s %s %s",a,b,c,d,e);
		kunci[j]=a;
		nilai[j]=b;
		nilai_palsu[j]=c;
		sandi[j]=d;
		sandi_palsu[j]=e;
	}
		scanf("%s %s",qk,qp);
		for(int i=0;i<n;i++)
		{
			if(strcmp(qk,kunci[i])==0)
			{
				if(strcmp(qp,sandi[i])==0){
					printf("%s\n",nilai[i]);
					break;
				}
				else if(strcmp(qp,sandi_palsu[i])==0){
					printf("%s\n",nilai_palsu[i]);
					break;
				}
				else{
					printf("Key or password not found.\n");
					break;
				}
			}
			else{
				printf("Key or password not found.\n");
				break;
			}
		}
	return 0;
}
