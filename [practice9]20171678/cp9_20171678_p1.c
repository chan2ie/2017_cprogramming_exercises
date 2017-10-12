#include <stdio.h>

int string_length(char *st){
	int length = 0;

	while(1){
		if(*(st + length) == '\0'){
			break;
		}
		length++;
	}

	return length;
}

int main(){
	char s[] = "C is a high-level language";
	char *t = "Cprogramming";

	printf("문자열 s의 길이 : %d\n",string_length(s));
	printf("sizeof(s) : %d\n",(int)sizeof(s));
	printf("문자열 t의 길이 : %d\n",string_length(t));
	printf("sizeof(t) : %d\n",(int)sizeof(t));

	/*
	 string_length의 경우 null문자를 만나기 전까지의 개수를 세지만, sizeof()의 경우 array의 크기를 반환하므로 null문자가 들어간 칸을 포함하여 센다.
	 따라서 문자열 s의 길이와 sizeof(s)에서 1의 차이가 난다.
	 sizeof(t)의 경우 포인터의 크기를 반환하므로, t가 가르키는 문자열의 길이와는 상관 없이 8이 반환된다.
	 */
	return 0;
}
