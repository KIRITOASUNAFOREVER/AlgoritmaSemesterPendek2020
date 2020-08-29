#include<stdio.h>
#include<math.h>

int p=0;
int u=0;
int t=1;
 
int main(){
   while(scanf("%d %d",&p,&u)==2){   
  		printf("Case #%d:\n",t++);
    	int dm = 0;
 		int q = -1;
    	for(int i = 1;i*i <= p;i++){
        	if(p%i==0){
		 		if(p!=1)printf("%d ",i);
		 		else printf("%d",i);
		 		if(i==u)
   				{
   					q = dm;
        		}  
   				dm++;
    		}
 		}
    	for(int i = ceil(sqrt(p))-1;i > 0;i--){
			if(p%i==0){
         		if(i!=1)printf("%d ",p/i);
            	else printf("%d",p/i);
            	if(p/i==u){  
   					q = dm;
   				}       
   				dm++; 
    		}
		}
 		printf("\n%d\n\n",q);    
 	}
	return 0;
}
