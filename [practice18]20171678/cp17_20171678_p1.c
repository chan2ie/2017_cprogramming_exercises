#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union utemp{
	int i;
	float f;
	double d;
};

typedef struct {
	int type;
	char name[20];
	union utemp u;
}stemp;

void power(stemp *s) {
	switch (s->type) {
	case 1: s->u.i = s->u.i * s->u.i; break;
	case 2: s->u.f = s->u.f * s->u.f; break;
	case 3: s->u.d = s->u.d * s->u.d; break;
	}
}

int main () {
	int num;
	stemp *n;

	printf("Number of Iterations : ");
	scanf("%d", &num);

	n = malloc(num * sizeof(stemp));

	for (int i = 0; i < num; i++) {
		printf("Type [1 for int, 2 for float, 3 for double] : ");
		scanf("%d", &n[i].type);

		switch (n[i].type) {
		case 1: 
			strcpy(n[i].name, "integer"); 
			printf("Enter a integer value : ");
			scanf("%d", &n[i].u.i);
			break;
		case 2: 
			strcpy(n[i].name, "float");
			printf("Enter a float value : ");
			scanf("%f", &n[i].u.f);
			break;
		case 3: 
			strcpy(n[i].name, "double"); 
			printf("Enter a integer value : ");
			scanf("%lf", &n[i].u.d);
			break;
		}
	
		power(&(n[i]));
	}
	
	printf("----------Result----------\n");
	for (int i = 0; i < num; i++) {
		printf("%-10s: ", n[i].name);

		switch (n[i].type) {
		case 1:
			printf("%d\n", n[i].u.i);
			break;
		case 2:
			printf("%.4f\n", n[i].u.f);
			break;
		case 3:
			printf("%.4lf\n", n[i].u.d);
			break;
		}
	}

	return 0;
}
