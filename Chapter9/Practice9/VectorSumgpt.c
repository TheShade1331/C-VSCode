#include <stdio.h>

typedef struct vector {
    float i;
    float j;
} V;

void VectorInit(V *a);
void VectorSum(V e, V f);

int main() {
    V v1;
    V v2;
    printf("Initialising First Vector:\n");
    VectorInit(&v1);
    printf("\n\nInitialising Second Vector:\n");
    VectorInit(&v2);
    VectorSum(v1, v2);
    return 0;
}

void VectorInit(V *a) {
    printf("Enter the X dimension:\n");
    scanf("%f", &(a->i));
    printf("Enter the Y dimension:\n");
    scanf("%f", &(a->j));
    printf("Hence Vector is %.2fi %.2fj", a->i, a->j);
}

void VectorSum(V e, V f) {
    float I = e.i + f.i;
    float J = e.j + f.j;
    printf("\n\nThe Sum of Two Vectors is %.2fi %.2fj", I, J);
}
