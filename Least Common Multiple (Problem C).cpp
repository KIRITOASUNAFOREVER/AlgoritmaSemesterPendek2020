#include <stdio.h>
int gcd(int a,int b) // function to find gcd of two nos
{
    if(b==0)
    return a; // base condition
    
    return gcd(b,a%b); // recursive condition 
}
int lcm(int a,int b)
{
    int prod=a*b;
    return prod/(gcd(a,b)); // returns lcm of a and b
}
int main()
{
    int t; // variable to store no of test cases
    scanf("%d",&t); // to take user input
    int n; // to store no of input value
    for(int i=0;i<t;i++) // loop through 
    {
        scanf("%d",&n); // to take user input
        int arr[n]; // to store n integers whose lcm is to be calculated
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[j]); // looping and taking input from user for n integers
        }
        // lcm is commutative
        //LCM(a, b, c) = LCM(LCM(a, b), c) = LCM(a, LCM(b, c))
        int l=lcm(arr[0],arr[1]); // to store lcm of given nos
        for(int j=2;j<n;j++)
        {
            l=lcm(l,arr[j]); // iteratively calling lcm function as lcm is commutative
        }
        printf("Case #%d: %d\n",i+1,l); // output lcm to the screen
    }
    return 0;
}
