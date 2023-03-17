#include <stdio.h>
#include <string.h>

int main(void)
{
    char input[] = "Test input line with a lot of spaces.\0";
    const char *delimiter = " ";

    char *token;

    token = strtok(input, delimiter);

    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, delimiter);
    }

    printf("%s", input);
    
    return 0;
}