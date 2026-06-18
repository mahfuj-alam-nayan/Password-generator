#include <stdio.h>

int main() {
    float balance = 1000;
    int choice;
    float amount;

    while(1) {
        printf("\n1.Deposit\n");
        printf("2.Withdraw\n");
        printf("3.Check Balance\n");
        printf("4.Exit\n");

        printf("Choose: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:
            printf("Enter amount: ");
            scanf("%f", &amount);
            balance += amount;
            break;

        case 2:
            printf("Enter amount: ");
            scanf("%f", &amount);

            if(amount <= balance)
                balance -= amount;
            else
                printf("Insufficient Balance!\n");
            break;

        case 3:
            printf("Balance = %.2f\n", balance);
            break;

        case 4:
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }
}
