#include<stdio.h>
#include<string.h>

void pencarianDfs(int mat[][50000], int teman, int *visible, int depth){
	if(visible[teman-1]==0)
		visible[teman-1] = 2;

	if(mat[teman-1][0]-1>=0 && mat[teman-1][1]-1>=0 && depth>0){
		if(visible[mat[teman-1][0]-1]==0)
			pencarianDfs(mat, mat[teman-1][0], visible, depth-1);
		if(visible[mat[teman-1][1]-1]==0)
			pencarianDfs(mat, mat[teman-1][1], visible, depth-1);
	}
}

void rekomendasiTeman(int mat[][50000], int* visible, int user, int depth){
	visible[user-1] = 3;
	visible[mat[user-1][0]-1] = 1;
	visible[mat[user-1][1]-1] = 1;
	pencarianDfs(mat,mat[user-1][0], visible, depth);
	pencarianDfs(mat,mat[user-1][1], visible, depth);
}

int main(){
	int t;
	int r = 1;
	char hasil[50000];
	int index = 0;
	scanf("%d", &t);
	while(t--){
		int n, depth, user;
		scanf("%d", &n);
		int mat[n][50000], max=-1;
		for(int i=0;i<n;i++){
		scanf("%d %d %d", &mat[i][0], &mat[i][1], &mat[i][2]);
		if(max<mat[i][0])
			max = mat[i][0];
		if(max<mat[i][1])
			max = mat[i][1];
		if(max<mat[i][2])
			max = mat[i][2];
}
	scanf("%d %d", &user, &depth);
	int adj_mat[max][50000], visited[max];
	for(int i=0;i<max;i++){
		adj_mat[i][0] = 0;
		adj_mat[i][1] = 0;
		visited[i] = 0;
	}
	for(int i=0;i<n;i++){
		adj_mat[mat[i][0] - 1][0] = mat[i][1];
		adj_mat[mat[i][0] - 1][1] = mat[i][2];
	}
	rekomendasiTeman(adj_mat, visited, user, depth);
	printf("Recommendation #%d:", r++);
	for(int i=0;i<max;i++){
		if(visited[i]==2){
			hasil[index] = i+1;
			index++;
		}
	}
	int jumlah = strlen(hasil);
	if(jumlah > 0)
	{
		for(int m=0 ; m < jumlah ; m++)
		{	
			printf(" %d",hasil[m]);
		}
	}
	else
	{
		printf(" -");
	}
	for(int m=0 ; m < jumlah ; m++)
	{	
		hasil[m] = 0;
	}
	printf("\n");
}
	return 0;
}
