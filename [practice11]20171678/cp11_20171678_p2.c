#include <stdio.h>

void my_strcpy(char *des, char *str){
	int i = 0;

	while(1){
		*(des + i) = *(str + i);
		if(*(des + i) == '\0'){
			break;
		}
		i++;
	}
}

int main(){
	char str[53] = {0}, des[53] = {0};

	printf("Input String : ");
	scanf("%s",str);

	my_strcpy(des, str);

	printf("Result : %s\n",des);

	return 0;
}
