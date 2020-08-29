#include<stdio.h>
#include<math.h>

//Function to find GCD
long GCD(long a, long b)  
{  
    // Everything divides 0   
    if (a == 0)  
        return b;  
    if (b == 0)  
        return a;  
         
    // base case  
    if (a == b)  
        return a;  
         
        // a is greater  
    if (a > b)  
        return GCD(a-b, b);  
    return GCD(a, b-a);  
}  

long mulPrimeFactors(long a, long b) 
{ 
    // Get the GCD of the given numbers 
    long gcd = GCD(a, b); 
    long smallestPrime,largestPrime;
    int f=0,i;
        while (gcd%2 == 0) 
    { 
        f=1;
        smallestPrime=2;
        largestPrime=2;
        gcd = gcd/2; 
    } 
  
    // n must be odd at this point.  So we can skip  
    // one element (Note i = i +2) 
    for (i = 3; i <= sqrt(gcd); i = i+2) 
    { 
        // While i divides n, print i and divide n 
        while (gcd % i == 0) 
        { 
                if(f==0)
                {
                        smallestPrime=i;
                        f=1;
                        }
                largestPrime=i;
            gcd = gcd/i; 
        } 
    } 
    //Still a largest prime number is available
    if (gcd > 2) 
    {
        if(f==0)
        {
                smallestPrime=gcd;
                f=1;
                }
        largestPrime=gcd;
        }

        int result=smallestPrime*largestPrime;

        
        return result;
} 

//Driver function
int main()
{
        //number of test cases
        int T,t;
        scanf("%d ",&T);
        for(t=1;t<=T;t++)
        {
                long P,Q;
                scanf("%ld",&P);
                scanf("%ld",&Q);
                int result=mulPrimeFactors(P,Q);
                printf("Case #%d: %d\n",t,result);
        }       
        
}
