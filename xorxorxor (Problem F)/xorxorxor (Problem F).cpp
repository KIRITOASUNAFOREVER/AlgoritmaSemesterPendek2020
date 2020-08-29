#include<stdio.h>

int main(){
    FILE *fp;
    int i,j,n,flag,tc=1;
    char in[100],out[100],result[100];

    fp=fopen("testdata.txt","r");
    while(!feof(fp)){
        //Scanning an input string from file
        fscanf(fp,"%s",in);
        i=0;

        while(in[i]){
            //Performing xor with 8 for a character and storing in out string
            out[i]=in[i]^8;
            i++;
        }
        
        out[i]='\0';
        i=0;
        j=0;
        flag=0;

        while(out[i]){            
            if(i%2==1){
                // For every even position in out array if char is not a number we exit
                //Note: Indexing of array starts from zero
                if(out[i]<'0' || out[i]>'9'){
                    flag=1;
                    break;
                }
                else{
                    //n is current number
                    n = out[i] - '0';
                    while(n > 0){
                        //Copying the character into result string n times
                        result[j] = out[i-1];
                        j++;
                        n--;
                    }
                }      
            }    
            i++;
        }
        result[j]='\0';
        if(flag==1)
            printf("Case #%d: Corrupted format\n",tc);
        else
            printf("Case #%d: %s\n",tc,result);
        tc++;
    }
    return 0;
}
