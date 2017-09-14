#include <stdio.h>

void swap_array(int *arr1, int *arr2){
	int array[10];

	for(int i = 0; i < 10; i++){
		array[i] = *(arr1 + i);
	}
	for(int i = 0; i < 10; i++){
		*(arr1 + i) = *(arr2 + i);
	}
	for(int i = 0; i < 10; i++){
		*(arr2 + i) = array[i];
	}
}

int main(){

	int array1[10], array2[10];

	printf("Input 10 integers for array1 : ");
	for(int i = 0; i < 10; i++){
		scanf("%d",&array1[i]);
	}
	printf("Input 10 integers for array2 : ");
	for(int i = 0; i < 10; i++){
		scanf("%d",&array2[i]);
	}
	
	swap_array(array1, array2);

	printf("----Switched array----\n");

	printf("array1 : ");
	for(int i = 0; i < 10; i++){
		printf("%d ",array1[i]);
	}
	printf("\n");
	printf("array2 : ");
	for(int i = 0; i < 10; i++){
		printf("%d ",array2[i]);
	}
	printf("\n");
	return 0;
}
