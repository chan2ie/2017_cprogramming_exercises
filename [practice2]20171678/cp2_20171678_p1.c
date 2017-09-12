#include <stdio.h>

void function(char **str1, char **str2){
	char *str;

	str = *str1;
	*str1 = *str2;
	*str2 = str;
}

int main(){
	char *str1 = "My name is Drake";
	char *str2 = "Student id is 20170000";
	
	printf("Before swapping\n\nstr1 = %s\nstr2 = %s\n",str1,str2);

	function(&str1, &str2);

	printf("\n\nAfter swapping\n\nstr1 = %s\nstr2 = %s\n",str1,str2);

	return 0;
}
