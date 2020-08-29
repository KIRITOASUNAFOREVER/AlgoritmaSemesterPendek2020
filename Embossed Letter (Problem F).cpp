#include<stdio.h>
#include<string.h>

int main()
{
        int t, i, j, k;
        
        scanf("%d", &t);                                                                    //Taking no of Test Cases
        getchar();
        char bibi[t][260], minimarket[t][10005];                        //Declaring array of character array
        
        for(i=1; i<=t; ++i)
        {
                fgets(bibi[i], sizeof(bibi[i]), stdin);                 //Reading the Bibi letters
                fgets(minimarket[i], sizeof(minimarket[i]), stdin);     //Reading the minimarket name
                
                for(j=0; j<strlen(bibi[i])-1; ++j)
                {
                        for(k=0; k<strlen(minimarket[i])-1; ++k)
                        {
                                if(bibi[i][j] == minimarket[i][k])              //Replacing the matching characters by $
                                        minimarket[i][k] ='$';
                        }
                }
				printf("%s", minimarket[i]);                       
        }
	return 0;
}
