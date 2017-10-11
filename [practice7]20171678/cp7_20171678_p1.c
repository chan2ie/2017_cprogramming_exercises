#include <stdio.h>
#include <stdlib.h>

int main(){
	int *arr, num;

	arr = (int*)calloc(5, sizeof(int));

	printf("Enter 15 digits: ");

	for(int i = 0; i < 15;i++){
		scanf("%1d",&num);
		*(arr + num) += 1;
	}

	printf("%d %d %d %d %d\n",*(arr), *(arr + 1), *(arr + 2), *(arr + 3), *(arr + 4));

	return 0;
}
