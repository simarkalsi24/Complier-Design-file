#include <stdio.h>
#include <ctype.h>

int isConstant(const char *str) {
    for (int i = 0; str[i] != '\0'; i++)
        if (!isdigit(str[i])) return 0;
    return 1;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    
    if (isConstant(str))
        printf("The string is a constant.\n");
    else
        printf("The string is not a constant.\n");
    
    return 0;
}