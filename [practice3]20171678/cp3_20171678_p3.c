#include <stdio.h>

void change_index(char *arr, int a, int b){
	char num;

	num = *(arr + a);
	*(arr + a) = *(arr + b);
	*(arr + b) = num;
}

int main(){
	char mystring[] = "2017 C Programming Fighting!";
	int a, b;
	
	printf("Before : %s\n", mystring);
	printf("Input 2 integers for index 1 and index 2 : ");
	scanf("%d%d",&a, &b);

	change_index(mystring, a, b);
	printf("After : %s\n", mystring);

	return 0;
}
