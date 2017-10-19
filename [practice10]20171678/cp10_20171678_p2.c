#include <stdio.h>

int main(){
	char str[101];
	int i = 0;

	printf("INPUT : ");
	fgets(str, sizeof(str),stdin);
	
	while(1){
		if(str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i] != '\0'){
			printf("%c",str[i]);
			if(str[i + 1] == '\t' || str[i + 1] == ' ' || str[i + 1] == '\n' || str[i + 1] == '\0'){
				printf("\n");
			}
		}
		if(str[i] == '\0'){
			break;
		}
		i++;
	}
	
	return 0;
}
