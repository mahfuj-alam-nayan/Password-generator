#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int len, i;

    char chars[] =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz"
        "0123456789!@#$%^&*";

    printf("Enter password length: ");
    scanf("%d", &len);

    srand(time(NULL));

    printf("Generated Password: ");

    for(i = 0; i < len; i++) {
        printf("%c", chars[rand() % (sizeof(chars)-1)]);
    }

    printf("\n");

    return 0;
}
