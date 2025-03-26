#include <stdio.h>
#include <string.h>

const char *keywords[] = {
    "int", "float", "if", "else", "return", "while", "for", "break", "continue"
};

int isKeyword(char *word) {
    for (int i = 0; i < 9; i++)
        if (strcmp(word, keywords[i]) == 0) return 1;
    return 0;
}

int main() {
    char word[100];
    printf("Enter a word: ");
    scanf("%s", word);

    if (isKeyword(word))
        printf("It's a keyword.\n");
    else
        printf("Not a keyword.\n");

    return 0;
}