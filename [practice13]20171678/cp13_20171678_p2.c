#include <stdio.h>

int main(){
	int price;

	struct coinbox{
		int n500, n100, n50, n10;	
	};

	struct coinbox coin;

	printf("input money : ");
	scanf("%d",&price);

	coin.n500 = price / 500;
	price -= 500 * coin.n500;
	coin.n100 = price / 100;
	price -= 100 * coin.n100;
	coin.n50 = price / 50;
	price -= 50 * coin.n50;
	coin.n10 = price / 10;

	printf("# of 500 = %d\n",coin.n500);
	printf("# of 100 = %d\n",coin.n100);
	printf("# of 50 = %d\n",coin.n50);
	printf("# of 10 = %d\n",coin.n10);

	return 0;
}
