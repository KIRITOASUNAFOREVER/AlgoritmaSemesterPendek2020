#include <stdio.h>
int main()
{
    int virus,N,M;

    scanf("%d %d",&N,&M);
    
    virus = (1 << N);	
    if(virus > M){
        virus %=M;
    }
    else{
        virus = virus;
    }
    
    printf("%d\n",virus);
    
    return 0;
}