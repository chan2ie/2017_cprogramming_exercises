#include <stdio.h>

int main(){
	char *str = "Sogang Computer Is Very Good and Very Hard";

	printf("|%50s|\n",str);
	printf("|%-50s|\n",str);
	printf("|%-50.28s|\n",str);
	printf("|%-.18s%32s|\n",str,str+33);

	return 0;
}
