#include<stdio.h>
#include<stdlib.h>

int find_Total_Number_Ways(int arr[], int index, int m, int size) {   
    if (m == 0 && index == size) 
        return 1; 
    if (index >= size) 
        return 0; 
    return find_Total_Number_Ways(arr, index + 1, m,size) 
           + find_Total_Number_Ways(arr, index + 1, m - arr[index],size) 
           + find_Total_Number_Ways(arr, index + 1, m + arr[index],size); 
} 
  
// Driver Program 
int main() { 
  int t,m,n;
  scanf("%d",&t);
  int c=1;
  while(c<=t){
      scanf("%d",&m); // target number to achieve
      scanf("%d",&n);
      int a[n];
      
      for(int i=0;i<n;i++){
          scanf("%d",&a[i]);
      }
      int answer=find_Total_Number_Ways(a,0,m,n);
    	if(answer>0)
        	printf("Case #%d: There will be %d way(s).\n",c,answer);
    	else
        	printf("Case #%d: There's no way.\n",c);    
    	c++;
  	}
    return 0;
}
