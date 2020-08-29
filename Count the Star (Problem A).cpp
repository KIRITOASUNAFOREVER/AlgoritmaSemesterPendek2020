#include <stdio.h>
#include <stdlib.h>

int main(){
	int t, R, C, d, i, j, x, y, count;
	char **arr;
	//input the number of test cases
	scanf("%d", &t);

	//loop for each test case
	for(int a = 0; a < t; a++){
		//in the beginning of each iteration, set d and count to
		//default values
		d = 1;
		count = 0;
		//input R and C
		scanf("%d %d", &R, &C);
		
		//dynamically allocate memory for char array
		arr = (char **)malloc(R * sizeof(char *));
		for (int i=0; i<R; i++)
			arr[i] = (char *)malloc(C * sizeof(char));

		//input elements of char array
		//when you encounter a sign, store its i and j indices
		for(int i = 0; i < R; i++){
			for(int j = 0; j < C; j++){
				scanf(" %c", &arr[i][j]);
				if(arr[i][j] == '>' || arr[i][j] == '<' || arr[i][j] == 'x'){
					x = i;
					y = j;
				}
			}
		}
		//in the question, the coordinates have been shown
		//using (y,x) but in the code it is intuitive to use
		//(x, y). Hence, all consecutive coordinate calculation have been flipped for sign '<'
		if(arr[x][y] == '<'){
			d = 1;
			int x_index, y_index;
			x_index = x+d;
			y_index = y+d;
			//keep looking for stars in that direction
			while(x_index < R && y_index < C){
				if(arr[x_index][y_index] == '*')
					count++;
				d++;
				x_index = x+d;
				y_index = y+d;
			}
			//reset d and look in a new direction
			d = 1;
			x_index = x-d;
			y_index = y+d;
			//keep looking for stars in that direction
			while(x_index >= 0 && y_index < C){
				if(arr[x_index][y_index] == '*')
					count++;
				d++;
				x_index = x-d;
				y_index = y+d;
			}
		}	
		//for sign '>'
		else if(arr[x][y] == '>'){
			int x_index, y_index;
			x_index = x-d;
			y_index = y-d;

			//keep looking for stars in that direction
			while(x_index >= 0 && y_index >= 0){
				if(arr[x_index][y_index] == '*'){
					count++;
				}
				d++;
				x_index = x-d;
				y_index = y-d;
			}
			//reset d
			d = 1;
			x_index = x+d;
			y_index = y-d;
			//keep looking for stars in that direction
			while(x_index < R && y_index >= 0){
				if(arr[x_index][y_index] == '*')
					count++;
				d++;
				x_index = x+d;
				y_index = y-d;
			}
		}
			//for sign 'x'
		else if(arr[x][y] == 'x'){
			int x_index, y_index;
			x_index = x+d;
			y_index = y-d;
			
			//keep looking for stars in that direction
			while(x_index < R && y_index >= 0){
				if(arr[x_index][y_index] == '*')
					count++;
				d++;	
				x_index = x+d;
				y_index = y-d;
			}
			//reset d
			d = 1;
			x_index = x+d;
			y_index = y+d;
			//keep looking for stars in that direction
			while(x_index < R && y_index < C){
				if(arr[x_index][y_index] == '*')
					count++;
				d++;
				x_index = x+d;
				y_index = y+d;
			}
			//reset d
			d = 1;
			x_index = x-d;
			y_index = y-d;
			
			//keep looking for stars in that direction
			while(x_index >= 0 && y_index >= 0){
				if(arr[x_index][y_index] == '*')
					count++;
				d++;
				x_index = x-d;
				y_index = y-d;
			}

			//reset d
			d = 1;
			x_index = x-d;
			y_index = y+d;

			//keep looking for stars in that direction
			while(x_index >= 0 && y_index < C){
				if(arr[x_index][y_index] == '*')
					count++;
				d++;
				x_index = x-d;
				y_index = y+d;
			}
		}
		//print result for that particular test case
		printf("Case #%d: %d\n", a+1, count);
	}
	return 0;
}
