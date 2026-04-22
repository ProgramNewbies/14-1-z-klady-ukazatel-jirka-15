#include <stdio.h>

int main() {
    // 1. Deklarace proměnných a načtení vstupu
    int a, b, c;
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        return 1; // Chyba načítání
    }

    // 2. Vytvoření ukazatelů
    int *p_a = &a;
    int *p_b = &b;
    int *p_c = &c;

    // 3. Výpočty výhradně přes ukazatele
    
    // Součet
    int soucet = *p_a + *p_b + *p_c;

    // Největší z nich (Maximum)
    int max = *p_a;
    if (*p_b > max) {
        max = *p_b;
    }
    if (*p_c > max) {
        max = *p_c;
    }

    // 4. Výpis podle požadovaného formátu
    printf("Soucet: %d\n", soucet);
    printf("Maximum: %d\n", max);

    // Test sudosti součtu
    if (soucet % 2 == 0) {
        printf("Soucet je sudy\n");
    } else {
        printf("Soucet je lichy\n");
    }

    return 0;
}