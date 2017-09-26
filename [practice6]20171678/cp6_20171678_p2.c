#include<stdio.h>
#include<stdlib.h>

int* calculate_next(int *pascal_tr, int current_level){
	int *next_level;

	next_level = (int*)malloc((current_level+1) * sizeof(int));

	*next_level = 1;
	*(next_level + current_level) = 1;

	for(int i = 0; i < current_level - 1; i++){
		*(next_level + i + 1) = *(pascal_tr + i) + *(pascal_tr + i + 1);
	}

	free(pascal_tr);

	return next_level;
}
int main(){
	
	int *pascal_tr;
	int height, current;

	printf("Input the level of Pascal's triangle : ");
	scanf("%d",&height);
	
	pascal_tr = (int*)malloc(1 * sizeof(int));
	*pascal_tr = 1;

	for(current = 1; current < height + 1; current++){
		for(int j = 0; j < current; j++){
			printf("%d ", *(pascal_tr + j));
		}
		printf("\n");

		pascal_tr = calculate_next(pascal_tr, current);
	}

	free(pascal_tr);
	return 0; 
}
