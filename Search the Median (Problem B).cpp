#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
	return ( *(int*)a - *(int*)b );
}

int main() {
	int t,cases = 1;
	scanf("%d",&t);

	while(t--){
		int n;
		scanf("%d",&n);

		int arr[n];
		for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}

		int x;
		scanf("%d", &x);

		int lessCount = 0;
		for(int i=0;i<n;i++){
			if(arr[i]<x){
				lessCount++;
			}
		}

		if(lessCount%2==0){
			int rightsize = n - lessCount - 1;
			int rightArray[rightsize];
			int j = 0;

			for(int i=0;i<n;i++){
				if(arr[i]>x){
					rightArray[j] = arr[i];
					j++;
				}
			}

			qsort(rightArray, rightsize, sizeof(int), cmpfunc);
	
			float median;
			if(rightsize%2==0){
				median = (float)(rightArray[rightsize/2]+rightArray[(rightsize-1)/2])/2.0;
			}
			else{
				median = (float)rightArray[rightsize/2];
			}
			printf("Case #%d: %.1f\n",cases,median);
		}
		else{
			int leftsize = lessCount;
			int leftArray[leftsize];
			int j = 0;

			for(int i=0;i<n;i++){
				if(arr[i]<x){
					leftArray[j] = arr[i];
					j++;
				}
			}

			qsort(leftArray, leftsize, sizeof(int), cmpfunc);

			float median;
			median = leftArray[leftsize/2];
			printf("Case #%d: %.0f\n",cases,median);
		}
		cases++;
	}
	return 0;
}
