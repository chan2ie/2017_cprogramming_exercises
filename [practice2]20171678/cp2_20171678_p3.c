#include <stdio.h>

void *min(void *ptr1, void *ptr2,char option){
	if(option == 'i'){
		int *num1, *num2;

		num1 = ptr1;
		num2 = ptr2;
		if(*num1 > *num2){
			return ptr2;
		}
		else return ptr1;
	}
	else{
		float *num1, *num2;

		num1 = ptr1;
		num2 = ptr2;

		if(*num1 > *num2){
			return ptr2;
		}
		else return ptr1;
	}
}

int main(){
	void *result;
	char option;
	printf("Enter the type of numbers: ");
	scanf("%c",&option);
	
	if(option == 'i'){
		int num1, num2;
		int *real;
	printf("Enter the 1st number : ");
		scanf("%d", &num1);
		printf("Enter the 2st number : ");
		scanf("%d", &num2);
		result = min(&num1, &num2, option);
		real = result;
		printf("minimum value is %d\n",*real);
	}
	else{
		float num1, num2;
		float *real;
		printf("Enter the 1st number : ");
		scanf("%f", &num1);
		printf("Enter the 2st number : ");
		scanf("%f", &num2);
		
		result = min(&num1, &num2, option);
		real = result;
		printf("minimum value is %.2f\n",*real);
	}
}
