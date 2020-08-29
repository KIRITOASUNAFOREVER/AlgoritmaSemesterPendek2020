#include<stdio.h> // including header file

int main(){
   int t,n,i; // declaring variables "t" for test case and "n" for number of candles and "i" for loop variable
   scanf("%d",&t);
   
   for(i=1;i<=t;i++){
       scanf("%d",&n);
       int height[n]; // declaring "height" array variable for taking candles hieghts
       for(i=1;i<=n;i++){ // taking input candles heights
           scanf("%d",&height[i]);
       }
       
       int esum=0,osum=0; // declaring variables "esum" for even height candles and "osum" for odd height candles
       for(i=1;i<=n;i++){
           if(height[i]%2==0){
               esum=esum+height[i]; // adding even height candles
           }
           else{
               osum=osum+height[i]; // adding odd height candles
           }
       }
       printf("%d %d\n",esum,osum); // printing ouput
   }
}
