#include <stdio.h>
#include <stdlib.h>

int *get_new_array(int size){
	return (int*)malloc(size*sizeof(int));
}
void get_new_array_call_by_value(int *a, int size){
	a = (int*)malloc(size*sizeof(int));
	/*위의 상황에서 a는 get_new_array_call_by_value 안에서 선언된 인트형 포인터이다. 
	  따라서 그에 저장된 값은 main 함수 안의 a와 무관하며 함수 안에서 a의 값이 변하여도 main함수의 a에 저장되지 않는다.*/
}
void get_new_array_call_by_reference(int **a, int size){
	*a = (int*)malloc(size*sizeof(int));
}
void print_state(int *a){
	if(a == NULL){
		printf("not allocated\n");
	}
	else{
		printf("allocated\n");
	}
}

int main(){
	int *a = NULL;
	print_state(a);

	get_new_array_call_by_value(a,10);
	print_state(a);
	free(a);

	get_new_array_call_by_reference(&a,10);
	print_state(a);
	free(a);

	a = get_new_array(10);
	print_state(a);
	free(a);

	return 0;
}
