#include <stdio.h>

void sort(int arr[10][10], int N){
	for(int count1 = 0; count1 < N*N; count1++){
		for(int count = 0; count < N*N - 1; count++){
			if((*(*(arr + (count / N)) + (count % N))) > *(*(arr + ((count + 1) / N)) + ((count + 1) % N))){
				int temp;
				temp = *(*(arr + (count / N)) + (count % N));
				*(*(arr + (count / N)) + (count % N)) = *(*(arr + ((count + 1) / N)) + ((count + 1) % N));
				*(*(arr + ((count + 1) / N)) + ((count + 1) % N)) = temp;
			}
		}
	}
}

int main(){
	
	int n;
	int arr[10][10];

	printf("Input Size N : ");
	scanf("%d",&n);
	printf("Input matrix N*N\n");
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			 scanf("%d",(*(arr + i) + j));
		}
	}

	sort(arr, n);
	
	printf("\nRESULT :\n");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			 printf("%d ",*(*(arr + i) + j));
		}
		printf("\n");
	}

	return 0;
}
