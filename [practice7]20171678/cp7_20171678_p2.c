#include <stdio.h>
#include <stdlib.h>

void double_double(int **a, int *size){
	*size = *size * 2;
	*a = (int*)realloc(*a, *size * sizeof(int));
	for(int i = 0; i < *size/2; i++){
		*(*a + i + *size/2) = 2 * *(*a + i);
	}

	for(int i = 0; i < *size; i++){
		for(int j = 0; j < *size - 1; j++){
			if(*(*a + j) > *(*a + j +1)){
				int temp;
				temp = *(*a + j);
				*(*a + j) = *(*a + j +1);
				*(*a + j + 1) = temp;
			}
		}
	}
	
	for(int i = 0; i < *size; i++){
		printf("%d ", *(*a + i));
	}
	printf("\n");
}

int main(){
	int n;
	int *arr;

	scanf("%d",&n);
	arr = (int*)malloc(n* sizeof(int));
	for(int i = 0; i < n; i++){
		scanf("%d",(arr + i));
	}

	for(int i = 0; i < 3; i++){
		double_double(&arr,&n);
	}

	free(arr);
	
	return 0;
}
