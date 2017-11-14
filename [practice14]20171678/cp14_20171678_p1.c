#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef int* Vector_Components;
typedef int Componenet;
typedef double Vectorsize;
typedef double Distance;
typedef int Scalar;
typedef double Angle;

typedef struct{
    Vector_Components comps;
    int vec_size;
}Vector;

Vectorsize getSize (Vector V) {
    int sum = 0;

    for(int i = 0; i < V.vec_size; i++){
        sum += (V.comps[i] * V.comps[i]);
    }
    
    return sqrt(sum);
}

Distance getDistance (Vector V1, Vector V2) {
    int sum = 0, diff;

    for(int i  = 0; i < V1.vec_size; i++){
        diff = V1.comps[i] - V2.comps[i];
        sum += diff * diff;
    }
    
    return (double)sqrt(sum);
}

Scalar getDotProduct (Vector V1, Vector V2) {
    int sum = 0;

    for(int i = 0; i < V1.vec_size; i++){
        sum += V1.comps[i] * V2.comps[i];
    }

    return sum;
}

Angle getAngle (Vector V1, Vector V2) {
    double ang;
    double sca = (double)getDotProduct(V1, V2);
    double siz = (double)(getSize(V1) * getSize(V2));
    
    ang = sca / siz;
    ang = acos(ang);
    
    return (ang * 180) / M_PI;
}

int main () {
    Vector v1;
    Vector v2;

    printf("Input size of Vector v1 : ");
    scanf("%d",&v1.vec_size);

    v1.comps = malloc(sizeof(Componenet) * v1.vec_size);

    printf("Input %d componenets of v1 : ", v1.vec_size);
    
    for(int i = 0; i < v1.vec_size; i++){
        scanf("%d",&v1.comps[i]); 
    }

    printf("Input size of Vector v2 : ");
    scanf("%d",&v2.vec_size);

    v2.comps = malloc(sizeof(Componenet) * v2.vec_size);

    printf("Input %d componenets of v2 : ", v2.vec_size);
    
    for(int i = 0; i < v2.vec_size; i++){
        scanf("%d",&v2.comps[i]); 
    }

    printf("\n\nResult\n");
    
    printf("Size of v1 = %.2lf\n", getSize(v1));
    printf("Size of v2 = %.2lf\n", getSize(v2));
    
    if(v1.vec_size == v2.vec_size){
        printf("Distance between v1 and v2 = %.3lf\n", getDistance(v1,v2));

        printf("Dot Product v1 * v2 = %d\n",getDotProduct(v1, v2));

        printf("Angle between v1 and v2 = %.2lf\n",getAngle(v1,v2));
    }

    free(v1.comps);
    free(v2.comps);

    return 0;
}
