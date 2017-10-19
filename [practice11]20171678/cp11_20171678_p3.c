#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char **str;

	str = (char**)calloc(10, sizeof(char*));

	for(int i = 0; i < 10; i++){
		str[i] = (char*)calloc(16, sizeof(char));
	}

	printf("Input 10 string\n");
	for(int i = 0; i < 10; i++){
		printf("String %d :", i + 1);
		scanf("%s",str[i]);
	}

	for(int j = 0; j < 10; j++){
		for(int i = 0; i < 9; i++){
			if(strlen(str[i]) > strlen(str[i+1])){
				char temp[16];
				strcpy(temp, str[i]);
				strcpy(str[i], str[i+1]);
				strcpy(str[i+1], temp);
			}
			else if(strlen(str[i]) == strlen(str[i+1])){
				if(strcmp(str[i], str[i+1]) > 0){
					char temp[16];
					strcpy(temp, str[i]);
					strcpy(str[i], str[i+1]);
					strcpy(str[i+1], temp);
				}
			}
		}
	}

	printf("Result\n");

	for(int i = 0; i < 10; i++){
		printf("%s\n", str[i]);
		free(str[i]);
	}

	free(str);
	
	return 0;
}
