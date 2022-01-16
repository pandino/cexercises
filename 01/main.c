#include<stdio.h>
#include<string.h>

int main()
{
    char name[BUFSIZ];
     
    printf("%s", "What is your name? ");
    fgets(name, BUFSIZ, stdin);
    name[strcspn(name, "\n")] = 0;
    printf("Hello, %s, nice to meet you!\n", name);
    return 0;
}