#include <stdio.h>

typedef struct{
    int x;
    int y;
}coord;

typedef struct{
    int area;
    int circum;
    int is_square;
    
    coord a;
    coord b;
}rectangle;

int main () {
    rectangle r;
    int height, width;

    printf("PUT coordinates : ");
    scanf("%d%d%d%d", &r.a.x, &r.a.y, &r.b.x, &r.b.y);

    height = r.b.y - r.a.y;
    width = r.b.x - r.a.x;

    r.area = height * width;
    r.circum = 2 * (height + width);

    printf("%d %d ", r.area, r.circum);

    if(height == width){
        r.is_square = 0;
    }
    else{
        r.is_square = 1;
    }

    switch(r.is_square){
        case 0 : printf("true\n"); break;
        case 1 : printf("false\n"); break;
     }

    return 0;
}
