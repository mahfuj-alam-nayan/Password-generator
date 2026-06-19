#include <stdio.h>
#include <string.h>

struct Book {
    char name[50];
};

int main() {
    struct Book books[100];
    int count = 0;
    int choice, i;

    while(1) {

        printf("\n1. Add Book\n");
        printf("2. Show Books\n");
        printf("3. Exit\n");
        printf("Choice: ");

        scanf("%d", &choice);

        if(choice == 1) {

            printf("Book Name: ");
            scanf("%s", books[count].name);

            count++;
        }

        else if(choice == 2) {

            printf("\nBook List:\n");

            for(i = 0; i < count; i++) {
                printf("%d. %s\n",
                       i + 1,
                       books[i].name);
            }
        }

        else if(choice == 3) {
            break;
        }
    }

    return 0;
}
