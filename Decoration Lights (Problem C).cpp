#include <stdio.h>

//main method
int main() {
    //declare required variables
    int T,N,i,j;
    //take input for no. of test cases
    scanf("%d", &T);
    //run loop for T times
    for(i=0; i<T; i++){
        //take input for number of lights
        scanf("%d", &N);
        //create array to store states of N lights
        int states[N];
        //take states of all N lights as input 
        for(j=0; j<N; j++){
            scanf("%d", &states[j]);
        }
        //if first lamp is on
        if(states[0]==0)
            //print N seconds for given test case 
            printf("Case #%d: %ds\n", i+1, N);
        else
            //print N*2 seconds for given test case
            printf("Case #%d: %ds\n", i+1, N*2);
    }
    //end
    return 0;
}
