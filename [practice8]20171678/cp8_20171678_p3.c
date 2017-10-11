#include <stdio.h>
#include <stdlib.h>

int **symetric(int **matrix, int n){
	int count = 1;

	matrix = (int**)malloc(n * sizeof(int*));

	for(int i = 0; i < n; i++){
		*(matrix + i) = (int*)malloc(n * sizeof(int));
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			*(*(matrix + i) + j) = count;
			count++;
		}
		count = i + 2;
	}

	return matrix;
}

int main(){
	int** arr;
	int size;

	printf("Input N :");
	scanf("%d",&size);

	arr = symetric(arr, size);
	
	for(int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
			printf("%d ",*(*(arr + i) + j));
		}
		printf("\n");
	}
	printf("\n");

	for(int i = 0; i < size; i++){
		free(arr[i]);
	}
	
	free(arr);

	return 0;
}
