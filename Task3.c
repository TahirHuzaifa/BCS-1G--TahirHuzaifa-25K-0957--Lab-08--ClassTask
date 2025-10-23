#include <stdio.h>

int main(){
	int i,j;
	char matrix[5][5];
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if ((i+j)%2==0){
				matrix[i][j] = 'X';
			}
			else{
				matrix[i][j] = 'O';
			}
		}
	}
	printf("\nClassroom Seating Chart:\n");
	printf("---------------------------\n");
	printf("---------------------------\n");
	for(i=0;i<5;i++){
		printf("Row %d ",i+1);
		for(j=0;j<5;j++){
			printf("%c ",matrix[i][j]);
			}
			printf("\n");
	}
	printf("\nSummary:\n");
	printf("Students seated: 13:\n");
	printf("Empty desks: 12\n");
	printf("Total desks: 25\n");
	
	return 0;
}
