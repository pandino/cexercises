#include<stdio.h>
#include<string.h>

int main() {
    char buff[BUFSIZ];
    char *name;
    int name_len;

    fputs("What is the input string? ", stdout);
    name = fgets(buff, BUFSIZ, stdin);
    name[strcspn(name, "\n")] = 0;
    name_len = strlen(name);
    if (name_len > 0){
        printf("%s has %li characters\n", name, strlen(name));
        return 0;
    } else {
        fputs("You must write something.\n", stderr);
        return 1;
    }
}