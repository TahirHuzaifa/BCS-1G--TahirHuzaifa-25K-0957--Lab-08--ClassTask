#include <stdio.h>

int main(){
    int matrix[3][3] = {
	{12,34,56},
	{77,4,6},
	{90,67,12},
	
	};
    
    int i,j,row=0,col=0,max;
    max = matrix[0][0];
    for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		if (matrix[i][j]>max){
    			max = matrix[i][j];
    			row = i;
    			col = j;
			}
		}
	}
	
	printf("Max value = %d\n",max);
	printf("row = %d\n",row);
	printf("column = %d\n",col);
    return 0;
}

