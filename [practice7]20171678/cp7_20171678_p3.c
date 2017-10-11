#include <stdio.h>
#include <stdlib.h>

int main(){
	char *sentence_1 = "Happy Thanks Giving Holiday!";
	char *sentence_2 = "Sogang University";
	char *copied_1;
	char *copied_2;
	int size1 = 0;
	int size2 = 0;

	while(1){
		if(*(sentence_1 + size1) == '\0'){
			break;
		}
		size1++;
	}
	while(1){
		if(*(sentence_2 + size2) == '\0'){
			break;
		}
		size2++;
	}

	copied_1 = (char*)malloc(size1*sizeof(char));
	
	printf("copied_1:");
	for(int i = 0; i < size1; i++){
		*(copied_1 + i) = *(sentence_1 + i);
		printf("%c",*(copied_1 + i));
	}
	printf("\nLength of copied_1 : %d\n\n",size1);

	copied_2 = (char*)malloc(size2*sizeof(char));

	printf("copied_2 :");
	for(int i = 0; i < size2; i++){
		*(copied_2 + i) = *(sentence_2 + i);
		printf("%c",*(copied_2 + i));
	}
	printf("\nLength of copied_2 : %d\n\n\n",size2);

	copied_1 = (char*)realloc(copied_1, size1+size2*sizeof(char));

	printf("copied_1 + copied_2 :");
	for(int i = size1; i < size1+size2; i++){
		*(copied_1 + i) = *(copied_2 + i - size1);
	}

	for(int i = 0; i < size1 + size2; i++){
		printf("%c",*(copied_1 + i));
	}

	printf("\nLength of merged : %d\n",size1+size2);

	free(copied_1);
	free(copied_2);

	return 0;
}
