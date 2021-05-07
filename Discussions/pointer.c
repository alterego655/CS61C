#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a = 5;

    printf("%d", *a);
    free(a); 
    return 0;
}
