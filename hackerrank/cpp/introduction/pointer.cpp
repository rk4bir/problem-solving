#include <stdio.h>

void update(int *a,int *b){
    int x = *a + *b;
    int y = (*a < *b) ? *b - *a : *a - *b;
    *a = x;
    *b = y;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);
    return 0;
}

