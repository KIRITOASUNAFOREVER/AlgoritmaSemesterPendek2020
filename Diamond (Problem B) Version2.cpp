#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	char a[n*2][(n*2)];
	int m=n*2;
	int t=n-2,trl=(n*2)-3,tru=n+1,tll=2,temp=1;

	for(int i = 0;i < m;i++){
		for(int j = 0;j < m;j++){
			if(i==n-1){
				if(j!=m-1){
					a[i][j]='0';
					continue;
				}
			}
			if(j==n-1){
				a[i][j]='0';
			}
			else if(j==t && i!=0){
				a[i][j]='0';
				t-=1;
			}
			else if(j==trl && i>=n){
				a[i][j]='0';
				trl-=1;
			}
			else if(j==tru && i!=1 && i!=0 && a[i][j-1]!='0' && i<=n){
				a[i][j]='0';
				tru+=1;
			}
			else{
				a[i][j]='.';
			}
			if(i>=n+1 && j==tll && a[i][j-1]!='0'){
				a[i][j]='0';
				tll+=1;
			}
		}
	}
	a[n-2][(n*2)-2]='.';
	a[n][0]='.';
	a[1][n]='0';
	a[n][1]='0';
	for(int i = 0;i < (n*2)-1;i++){
		for(int j = 0;j < (n*2);j++){
			printf("%c",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
