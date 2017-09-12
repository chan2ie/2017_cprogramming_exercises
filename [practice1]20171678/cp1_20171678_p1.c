#include <stdio.h>

int function(int* p1, int*p2){
	return *p1 + *p2;
}

int main(){
	int n1, n2;

	printf("Input function : ");
	scanf("%d%d", &n1, &n2);

	printf("The result of addition is : %d\n", function(&n1, &n2));

	return 0;
}
