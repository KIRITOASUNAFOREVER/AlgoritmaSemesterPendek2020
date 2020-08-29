#include<stdio.h>
#include<string.h>

int main()
{
  int Case;
  
  scanf("%d",&Case);
  for(int t = 0 ; t < Case ; t++)
  {
    int matrix[100][100];
    int number = 0;
    int result = 0;
    
    scanf("%d", &number);
    
    for(int i = 0 ; i < number ; i++)
    {
      for(int j = 0 ; j < number ; j++)
      {
        scanf("%d",&matrix[i][j]);
      }
    }
    
    int j = number-1;
    for(int i = 0 ; i < number ; i++){   
      result += matrix[i][i]; 
      result += matrix[i][j];
      j -= 1;
    }
    if(number%2 == 1) result -= matrix[number/2][number/2];
    
    printf("%d\n", result%=1000003);
  }
  return 0;
}
