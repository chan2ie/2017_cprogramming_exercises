#include <stdio.h>

void function(double* pa, double* pb, double* pc, double* pd){
	int result = 0;

	if(*pa == *pc){
		result = 1;
		if(*pb == *pd){
			result = 2;
		}
	}	
	
	switch(result){
	case 0 : printf("1\n"); break;
	case 1 : printf("0\n"); break;
	case 2 : printf("00\n"); break;
	}

}

int main(){
	double pa, pb, pc, pd;
	int result;

	printf("Input a, b, c, d : ");
	scanf("%lf%lf%lf%lf",&pa,&pb,&pc,&pd);

	function(&pa, &pb, &pc, &pd);
	
	return 0;
}
