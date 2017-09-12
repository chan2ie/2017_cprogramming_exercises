#include <stdio.h>
#include <math.h>

void function(int* a, int* b, int *c){
	double roota, rootb, sq;
	if(*b * *b - 4 * *a * *c < 0){
		printf("There is no root to this function.\n");
	}
	if(*b * *b - 4 * *a * *c == 0){
		roota = ( -*b ) / (2 * *a);
		printf("There is one root to this function : %.4lf\n",roota);
	}
	if(*b * *b - 4 * *a * *c > 0){
		sq = *b * *b - 4 * *a * *c; 
		sq = sqrt(sq);
		roota = ( -*b - sq ) / (2 * *a);
		rootb = ( -*b + sq ) / (2 * *a);
		printf("There is two roots to this function : %.4lf %.4lf\n",rootb, roota);
	}
}

int main(){
	int a, b, c;
	
	printf("Input a, b, c : ");
	scanf("%d%d%d", &a, &b, &c);

	function(&a, &b, &c);

	return 0;
}
