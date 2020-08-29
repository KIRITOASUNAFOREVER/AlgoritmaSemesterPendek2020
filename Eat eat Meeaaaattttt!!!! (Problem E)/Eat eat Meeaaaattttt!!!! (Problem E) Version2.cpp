#include<stdio.h>
#include<string.h>

int main()
{
        int T,t;
        //Number of Competitions
        scanf("%d",&T);
        for(t=1;t<=T;t++)
        {
                int P,M;
                //Number of competitors
                scanf("%d",&P);
                //Number of matches in the competion
                scanf("%d",&M);
                char competitor[P][1005];
                int meatEaten[P];
                int i,j;
                //Loop to get input for competitors 
                for(i=0;i<P;i++)
                {
                        scanf("%s",competitor[i]);
                        int sum=0;
                        //Loop to get input for number of meats eaten by a competitor
                        for(j=0;j<M;j++)
                        {
                                int meat;
                                scanf("%d",&meat);
                                sum+=meat;
                        }
                        meatEaten[i]=sum;
                }
                
                //Sorting 
                for(i=0;i<P;i++)
                {
                        for(j=i+1;j<P;j++)
                        {
                                if(meatEaten[i]<meatEaten[j])
                                {       //Sorting by greatest count
                                        int temp=meatEaten[i];
                                        meatEaten[i]=meatEaten[j];
                                        meatEaten[j]=temp;
                                        
                                        char temps[1005];
                                        strcpy(temps,competitor[i]);
                                        strcpy(competitor[i],competitor[j]);
                                        strcpy(competitor[j],temps);
                                }
                                if(meatEaten[i]==meatEaten[j])
                                {
                                        //Comparing and sorting competitor name if meatEaten is equal
                                        if(strcmp(competitor[i],competitor[j])>0)
                                        {
                                                int temp=meatEaten[i];
                                                meatEaten[i]=meatEaten[j];
                                                meatEaten[j]=temp;
                                                
                                                char temps[1005];
                                                strcpy(temps,competitor[i]);
                                                strcpy(competitor[i],competitor[j]);
                                                strcpy(competitor[j],temps);}
                                }
                        }
                }
                
                //Printing the result
                printf("Competition #%d:\n",t);
                for(i=0;i<P;i++)
                {
                        printf("%d. %s\n",i+1,competitor[i]);
                }
                printf("\n");
        }
}
