#include <stdio.h>
#include <stdlib.h>

int main(){
	char *chArr = (char*)malloc(sizeof(char));
	int start = 0, size = 1, length = 0;

	printf("Input string :");
	while(1){
		for(int i = start; i < size; i++){
			scanf("%c",(chArr + i));
			if(*(chArr + i) == '\n'){
				length = i;
				break;
			}
		}
		if(length != 0){
			break;
		}

		chArr = (char*)realloc(chArr,size*2 * sizeof(char));
		start = size;
		size = 2*size;
	}
	
	for(int i = 0; i < (length - 1)/2; i++){
		char temp = *(chArr + i);
		*(chArr + i) = *(chArr + length - 1 - i);
		*(chArr + length -1 -i) = temp;
	}

	printf("Output string :");
	for(int i = 0; i < size; i++){
		printf("%c",*(chArr + i));
	}
	free(chArr);
}
