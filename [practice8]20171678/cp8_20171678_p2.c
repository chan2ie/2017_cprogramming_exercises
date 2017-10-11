#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int **transpose(int **matrix, int m, int n){
	int** arr;
	
	arr = (int**)malloc(n * sizeof(int*));
	for(int i = 0; i < n; i++){
		arr[i] = (int*)malloc(m * sizeof(int));
	}

	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			arr[j][i] = matrix[i][j];
		}
	}

	for(int i = 0; i < m; i++){
		free(matrix[i]);
	}

	free(matrix);
	return arr;
}

int main(){
	int m, n;
	int **arr;

	printf("Number of Rows : ");
	scanf("%d",&m);
	printf("Number of Cols : ");
	scanf("%d",&n);

	srand(time(NULL));

	arr = (int**)malloc(m * sizeof(int*));
	for(int i = 0; i < m; i++){
		arr[i] = (int*)malloc(n * sizeof(int));
	}

	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			arr[i][j] = rand()%100 + 1;
		}
	}
	
	printf("Before\n");
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("%2d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	arr = transpose(arr, m, n);

	printf("After\n");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			printf("%2d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for(int i = 0; i < m; i++){
		free(arr[i]);
	}
	free(arr);
	
	return 0;
}
