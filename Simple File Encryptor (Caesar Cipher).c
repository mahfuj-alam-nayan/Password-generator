#include <stdio.h>

int main() {
    char text[100];
    int i;

    printf("Enter Text: ");
    scanf("%s", text);

    for(i = 0; text[i] != '\0'; i++) {
        text[i] = text[i] + 3;
    }

    printf("Encrypted Text: %s\n", text);

    return 0;
}
