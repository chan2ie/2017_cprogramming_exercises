#include <stdio.h>

void check(char *str){

	for(int i = 0; i < 5; i++){
		if(*(str + i) != *(str + 9 - i)){
			printf("RESULT : NO\n");
			return ;
		}
	}

	printf("RESULT : YES\n");
}

int main(){
	
	char arr[10];

	printf("INPUT :");

	for(int i = 0; i < 10; i++){
		scanf("%c",arr + i);
	}

	check(arr);

	return 0;
}
