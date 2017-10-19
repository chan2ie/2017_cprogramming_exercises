#include <stdio.h>

int main(){
	char str[101];
	int decimal, hexadecimal, realnum = 0, size = 0, mul = 1;

	printf("PUT Quaternion : ");
	scanf("%[0123]", str);

	while(str[size] != '\0'){
		size++;
	}
	size--;
	
	for(int i = 0; i <= size; i++){
		realnum += (str[size - i] -'0')*mul;
		mul = mul * 4;
	}
	printf("Decimal     : %d\n", realnum);

	hexadecimal = realnum;

	mul = 1;

	for(int i = 0; mul < realnum; i++){
		mul = mul * 16;
	}
	mul = mul /16;	
	printf("Hexadecimal : ");
	for(mul; mul >= 1; ){
		switch(hexadecimal / mul){
			case 10 : printf("a"); break;
			case 11 : printf("b"); break;
			case 12 : printf("c"); break;
			case 13 : printf("d"); break;
			case 14 : printf("e"); break;
			case 15 : printf("f"); break;

			default : printf("%d", hexadecimal / mul);
		}

		hexadecimal = hexadecimal % mul;
		mul = mul / 16;
	}
	printf("\n");
	return 0;

}
