#include <stdio.h>

int main() {
    FILE *file = fopen("input.txt", "r");
    if (!file) { printf("Error opening file.\n"); return 1; }

    char ch;
    int lines = 0, spaces = 0;

    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') lines++;
        if (ch == ' ') spaces++;
    }

    fclose(file);
    printf("Lines: %d\nSpaces: %d\n", lines, spaces);
    return 0;
}