#include <stdio.h>
#include <string.h>

int main(){
	char string[101];
	char firstname[50], lastname[50], major[20];
	int id;
	float cgpa;
	int i = 0;

	while(1){
		scanf("%c", &string[i]);

		if(string[i] == '\n'){
			string[i] = '\0';
			break;
		}

		i++;
	}
	sscanf(string,"%50[^,]%*c %50[^;]%*c %d %s %f",firstname,lastname,&id,major,&cgpa);
	sprintf(string,"%s\n%s\n%d\n%s\n%.2f\n",firstname,lastname,id,major,cgpa);
	
	printf("%s",string);
	return 0;
	
}
