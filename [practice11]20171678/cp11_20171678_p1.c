#include <stdio.h>

int my_strlen(char *str){
	int i = 0;

	while(1){
		if(*(str + i) == '\0'){
			break;
		}
		i++;
	}

	return i;
}

int main(){
	char str[100];

	printf("Input String : ");
	scanf("%s",str);

	printf("Length : %d\n",my_strlen(str));

	return 0;
}
