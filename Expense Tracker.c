#include <stdio.h>

int main() {
    int n, i;
    float expense, total = 0;

    printf("How many expenses? ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("Expense %d: ", i);
        scanf("%f", &expense);

        total += expense;
    }

    printf("\nTotal Expense = %.2f\n", total);

    return 0;
}
