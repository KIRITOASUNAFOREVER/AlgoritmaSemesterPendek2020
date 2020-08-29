#include <stdio.h>

int main()
{
	FILE * fp;
    int t,i=0;
    
    fp = fopen("testdata.txt", "r"); 
    if(fp){
		fscanf(fp,"%d\n",&t);
		for(i=0;i<t;i++){    
	        char name[20000];
	        fscanf(fp,"%s",name);
	        int n,j=0;
	        fscanf(fp,"%d",&n);
	        int a[n];
	        for(j=0;j<n;j++){
	            fscanf(fp,"%d",&a[j]);
	        }
	        int flag,k;
	        float value=-1.0;
	        for(k=0;k<n-4;k++){  
	            flag=0;
	            int l,sum=0,min=a[k],max=a[k];
	            for(l=k;l<k+4;l++){
	                sum+=a[l];
	                if(a[l]>max)
	                	max=a[l];
	                else if(a[l]<min)
	                	min=a[l];
	            }     
	            if((((sum-min-max)*1.0)/2.0)<value){
	                flag=1;
	                break;
	            }
	            else
	            	value=((sum-min-max)*1.0)/2.0;        
        	}
	        if(flag==0){
	            printf("%s: Accepted\n",name);
	        }
	        else{
	            printf("%s: Rejected\n",name);
	        }
    	}
		fclose(fp);
	}
    return 0;
}
