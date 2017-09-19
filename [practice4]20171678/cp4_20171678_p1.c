#include <stdio.h>
void bubble_sort(int *array, int size){
	for(int i = 0; i < size; i++){
		for(int j = 0; j < size - 1; j++){
			if(*(array + j) > *(array + j + 1)){
				int num = *(array + j);
				*(array + j) = *(array + j + 1);
				*(array + j + 1) = num;
			}
		}
	}
}
int main(){
	int arry[100];
	int n;

	printf("Put array size N : ");
	scanf("%d",&n);
	printf("Put array : ");
	for(int i = 0; i < n; i++){
		scanf("%d",(arry + i));
	}

	printf("__*__*__*__\n");
	printf("Printf array : ");
	for(int i = 0; i < n; i++){
		printf("%d ",*(arry + i));
	}
	printf("\n");

	bubble_sort(arry, n);
	printf("Sort array : ");
	for(int i = 0; i < n; i++){
		printf("%d ",*(arry + i));
	}
	printf("\n");

	return 0;
}
