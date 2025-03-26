#include <stdio.h>
#include <ctype.h>
#include <string.h>

void checkKeyword(char *word) {
    char *keywords[] = {"int", "float", "if", "else", "while", "return"};
    for (int i = 0; i < 6; i++)
        if (strcmp(word, keywords[i]) == 0) {
            printf("%s is a keyword.\n", word);
            return;
        }
    printf("%s is not a keyword.\n", word);
}

void checkIdentifier(char *word) {
    if (isalpha(word[0]) || word[0] == '_')
        printf("%s is a valid identifier.\n", word);
    else
        printf("%s is not a valid identifier.\n", word);
}

int main() {
    int choice;
    char word[100];

    while (1) {
        printf("1. Check keyword\n2. Check identifier\n3. Exit\n");
        scanf("%d", &choice);
        if (choice == 3) break;

        printf("Enter word: ");
        scanf("%s", word);

        if (choice == 1) checkKeyword(word);
        else if (choice == 2) checkIdentifier(word);
        else printf("Invalid choice!\n");
    }

    return 0;
}