#include <stdio.h>


void upper_to_lower(char str[]){
	int count = 0;

	while(1){
		
		if(*(str + count) == '\0'){
			break;
		}
		if('A'<= *(str + count) && *(str + count) <= 'Z'){
			*(str + count) -= 'A' - 'a';
		}
		count++;
	}
	printf("%s\n", str);

}

void lower_to_upper(char str[]){
	int count = 0;
	while(1){
		
		if(*(str + count) == '\0'){
			break;
		}
		if('a'<= *(str + count) || *(str + count) <= 'z'){
			*(str + count) += 'A' - 'a';
		}
		count++;
	}
	printf("%s\n", str);
}

int main(){
	
	char str[100];
	char count = 0;

	while(1){
		scanf("%c", &str[count]);
		
		if(str[count] == '\n'){
			str[count] = '\0';
			break;
		}

		count++;
	}


	upper_to_lower(str);
	lower_to_upper(str);
	return 0;
}
