#include <stdio.h>

int main(){
	int matrix[5][5];

	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			scanf("%d",(*(matrix + i)+j));
		}
	}

	printf("----result----\n");

	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			printf("%d ",*(*(matrix + j) + i));
		}
		printf("\n");
	}
	return 0;
}
