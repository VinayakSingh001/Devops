#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
      *a = *a + *b;
   int abs(diff) = *a - *b > 0 ? *a - *b : -(*a - *b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}