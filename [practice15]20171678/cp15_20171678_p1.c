#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int x;
    int y;
}point;

int finding_quadrant (point coord) {
    if(coord.x >= 0 && coord.y >= 0){
        return 0;
    }
    if(coord.x < 0 && coord.y >= 0){
        return 1;
    }
    if(coord.x < 0 && coord.y < 0){
        return 2;
    }
    if(coord.x >= 0 && coord.y < 0){
        return 3;
    }

}

int main () {
    int num;
    int quad[4] = {0};

    printf("좌표의 개수를 입력하세요 : ");
    scanf("%d",&num);

    point *coord = malloc(num*sizeof(point));

    for(int i = 0; i < num; i++){
        printf("%d 번째 점의 좌표 입력 (x,y) : ",i + 1);
        scanf("%d%d",&(coord[i].x),&(coord[i].y));
    
        quad[finding_quadrant(coord[i])]++;
    }

    printf("1사분면의 개수 : %d\n",quad[0]);
    printf("2사분면의 개수 : %d\n",quad[1]);
    printf("3사분면의 개수 : %d\n",quad[2]);
    printf("4사분면의 개수 : %d\n",quad[3]);

    free(coord);

    return 0;
}
