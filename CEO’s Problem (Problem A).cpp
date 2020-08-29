#include <stdio.h>

int main() {
   int t,i,j,m,n,c,recieved, paid,count=0,profit=0;
scanf("%d",&t);
   while(t--){
      scanf("%d %d",&m,&n); 
      for(i=0;i<n;i++){
  
         scanf("%d %d %d",&c,&recieved ,&paid);
         count+=c;
         profit+=recieved-paid; 
      }
      if(profit<0){
         printf("deficit ");
        
      }
      else  printf("profit");
  
      m=m+count-1;
  
      if((m/2)<(count-1)){
         printf(", market leader.\n");
     
      }
      else {
         printf(", insignificant in the market.\n");
      }
   }
   return 0;
}
