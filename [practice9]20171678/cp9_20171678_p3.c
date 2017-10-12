#include <stdio.h>

char* Encryption(char* Plaintext, int key){
	int count = 0;
	
	while(1){
		if(*(Plaintext + count) == '\0'){
			break;
		}
		else if(*(Plaintext + count) <= 'z' && *(Plaintext + count) >= 'a'){
			*(Plaintext + count) = *(Plaintext + count) + key -'a';
			*(Plaintext + count) = *(Plaintext + count) % 26 + 'a';
		}
		else if(*(Plaintext + count) <= 'Z' && *(Plaintext + count) >= 'A'){
			*(Plaintext + count) = *(Plaintext + count) + key -'A';
			*(Plaintext + count) = *(Plaintext + count) % 26 + 'A';
		}
		count++;
	}

	return Plaintext;
}

int main(){
	char * str;
	int count = 0, key;

	printf("Input the Plaintext : ");

	while(1){
		scanf("%c", (str + count));

		if(*(str + count) == '\n'){
			*(str + count) = '\0';
			break;
		}
		count++;
	}

	printf("Input key :");
	scanf("%d", &key);

	printf("Encrypt(%s) = %s\n",str,(Encryption(str, key)));
	printf("Decrypt(%s) = %s\n",str,(Encryption(str, 26 - key)));

	return 0;
}
