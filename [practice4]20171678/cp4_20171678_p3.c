#include <stdio.h>

int main(){
	int array[10][10] = {0};
	int numx, numy, count = 1;

	while(1){
		printf("PUT X and Y: ");
		scanf("%d%d",&numx,&numy);

		if(numx == -1 && numy == -1){
			break;
		}
		else{
			*(*(array + numx) + numy) = count;
			count++;
		}
	}

	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			if(*(*(array + j) + i) == 0){
				printf("*");
			}
			else{
				printf("%d",*(*(array + j) + i));
			}
		}
		printf("\n");
	}

	return 0;
}
