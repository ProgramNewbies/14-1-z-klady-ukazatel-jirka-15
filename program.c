#include <stdio.h>

int main() {
    int a, b, c;
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        return 0;
    }
    int *p_a = &a;
    int *p_b = &b;
    int *p_c = &c;
    int soucet = *p_a + *p_b + *p_c;
    int max = *p_a;
    if (*p_b > max) {
        max = *p_b;
    }
    if (*p_c > max) {
        max = *p_c;
    }
    printf("Soucet: %d\n", soucet);
    printf("Maximum: %d\n", max);

    if (soucet % 2 == 0) {
        printf("Soucet je sudy\n");
    } else {
        printf("Soucet je lichy\n");
    }
    return 0;
}

