#include <stdio.h>

int main() {
    char ch;
    scanf("%c",&ch);
    if (ch >= 'A' && ch <= 'Z'){
        printf("Uppercase",ch);
    }
    else{
        printf("Lowercase",ch);
    }
    return 0;
}