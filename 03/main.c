#include<stdio.h>
#include<string.h>

int main() {
    char quote[BUFSIZ];
    char name[BUFSIZ];
    char *result;

    fputs("What is the quote? ", stdout);
    fgets(quote, BUFSIZ, stdin);
    quote[strcspn(quote, "\n")] = 0;
    fputs("Who said it?", stdout);
    fgets(name, BUFSIZ, stdin);
    name[strcspn(name, "\n")] = 0;
    
    return 0;
}