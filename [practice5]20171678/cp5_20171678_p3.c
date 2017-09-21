#include <stdio.h>

void multiply(int a[10][10], int b[10][10], int result[10][10], int n, int m, int k){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < k; j++){
			for(int l = 0; l < m; l++){
				*(*(result + i) + j) += (*(*(a + i) + l) * *(*(b + l) + j));
			}
		}
	}
}

int main(){
	int arr1[10][10] = {0}, arr2[10][10] = {0}, result[10][10] = {0};
	int n, m, k;

	printf("Input Size N, M, K : ");
	scanf("%d%d%d",&n,&m,&k);

	printf("Input matrix N*M\n");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d",(*(arr1 + i) + j));
		}
	}
	printf("\nInput matrix M*K\n");
	for(int i = 0; i < m; i++){
		for(int j = 0; j < k; j++){
			scanf("%d",(*(arr2 + i) + j));
		}
	}
	
	multiply(arr1, arr2, result, n, m, k);
	
	printf("\nRESULT Matrix N*K\n");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < k; j++){
			printf("%d ",*(*(result + i) + j));
		}
		printf("\n");
	}
	return 0;
}
