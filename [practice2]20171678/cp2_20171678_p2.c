#include <stdio.h>

void calGcdLcm(int num1, int num2, int* Gcd, int* Lcm){
	int re;

	*Lcm = num1 * num2;
	
	while(1){
		re = num1 % num2;
		if(re == 0) break;
		num1 =  num2;
		num2 = re;
	}

	*Gcd = num2;
	*Lcm = *Lcm / *Gcd;
}

int main(){
	int n1, n2, gcd, lcm;

	printf("Enter the 1st number : ");
	scanf("%d",&n1);

	printf("Enter the 2nd number : ");
	scanf("%d",&n2);

	if (n2 > n1){
		calGcdLcm(n2, n1, &gcd, &lcm);
	}
	else{
		calGcdLcm(n1, n2, &gcd, &lcm);
	}


	printf("GCD of %d and %d is %d\nLCM of %d and %d is %d\n",n1,n2,gcd,n1,n2,lcm);

	return 0;
}
