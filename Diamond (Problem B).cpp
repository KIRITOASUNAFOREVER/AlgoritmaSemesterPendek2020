#include <stdio.h>
int main()
{
   int size;
   scanf("%d",&size); //reading size of the diamond
   int i;
   int middleDots=0,j=1,r;
   for(i=1;i<size;i++) //printing upper part of diamond except middle line
   {
       if(i==1) //printing first line separately
       {
          
           for(j=1;j<=(size*2);j++)
           {
               if(j==size) //printing O in middle
                   printf("0");
               else
                   printf(".");
           }
           printf("\n"); //printing new line
       }
       else
       {
           int numberOfDots=size-i;
           int dots;
           for(dots=1;dots<=numberOfDots;dots++) //printing initial left dots
           {  
               printf(".");
           }

           int z;
           for(z=1;z<=3;z++) //printing middle O's with dots. as we are printing only 3 O's So, we loop three times
           {
               printf("0");
      
               int m;
               for(m=1;z!=3 && m<=middleDots;m++) //printing .'s after O's
               {
                   printf(".");
               }

           }  
           middleDots++; //incrementing middle dots
           int rightDots=(size-i+1);  
          
           for(r=1;r<=rightDots;r++) //printing right dots after three O's
           {  
               printf(".");
           }
           printf("\n"); //printing new line

  
       }
      
      
  
   }
   //printing center line of the diamond
   int k=1;
   for(k=1;k<=size*2;k++)
   {
           if(k==2*size)
               printf(".");
           else
               printf("0");

   }
   printf("\n");

  
   //printing upper part of diamond
   int leftDots=1;
   middleDots=size-3;
   int rightDots=2;
   for(i=1;i<size-1;i++)
   {
       for(k=1;k<=leftDots;k++) //printing leftdots of downside diamond
       {  
           printf(".");

       }
       for(j=1;j<=3;j++) //middle dots of downside diamond
       {
           printf("0");
           for(r=1;j!=3 && r<=middleDots;r++)
           {
               printf(".");
           }
       }
       middleDots--;
       int r;
       for(r=1;r<=rightDots;r++) //right dots of downside diamond
       {
           printf(".");

       }
       rightDots++; //incrementing right dots
       leftDots++; //incrementing leftdots
       printf("\n");
      

   }
   //printing last line of the diamond(same as first line of the diamond)
   for(j=1;j<=(size*2);j++)
   {
       if(j==size)
           printf("0");
       else
           printf(".");
   }
   printf("\n");

  
  return 0;
  

}