#include <stdio.h>

int main(){

	int a = 5;
	char b = 'C';
	char array[] = "C programming";
	int *pa1, **pa2;
	char *pb1, **pb2;
	char *parray;
	
	pa1 = &a;
	pa2 = &pa1;
	pb1 = &b;
	pb2 = &pb1;
	parray = array;

	printf("print value of a using pa1 -> %d\n", *pa1);
	printf("print value of a using pa2 -> %d\n", **pa2);
	printf("print value of b using pb1 -> %c\n", *pb1);
	printf("print value of b using pb2 -> %c\n", **pb2);
	printf("print value of array using parray -> %s\n", parray);

	return 0;
}
