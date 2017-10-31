#include <stdio.h>
#include <string.h>

int strCmpPk(char* s1, char* s2){
	return strcmp(s1, s2);
}

void strPk(char* s1, char* s2){
	int count = 0, i = 0, result;
	char news1[101] = {0}, news2[101] = {0}, temp;

	while(1){
		if(s1[i] == '\0'){
			news1[count] = '\0';
			break;
		}
		if('a'<= s1[i] && 'z' >= s1[i]){
			news1[count] = s1[i];
			count++;
		}
		else if('A'<= s1[i] && 'Z' >= s1[i]){
			news1[count] = s1[i];
			count++;
		}
		i++;
	}

	count = 0; i = 0;

	while(1){
		if(s2[i] == '\0'){
			news2[count] = '\0';
			break;
		}
		if('a'<= s2[i] && 'z' >= s2[i]){
			news2[count] = s2[i];
			count++;
		}
		else if('A'<= s2[i] && 'Z' >= s2[i]){
			news2[count] = s2[i];
			count++;
		}
		i++;
	}
	
	printf("%s ", s1);
	result = strCmpPk(news1, news2);

	if( result  == 0 ){
		printf("==");
	}
	else if(result > 0){
		printf(">");
	}
	else if(result < 0){
		printf("<");
	}
	
	printf(" %s\n", s2);
}

int main(){
	char s1[101], s2[101];

	scanf("%s",s1);
	scanf("%s",s2);
	strPk(s1, s2);	

	return 0;
}

