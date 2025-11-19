/*
* Takes a string as input and mask all the chars into # other than the last 4 chars.
* Write it into masked
* Ex: "Skippy" --> "##ippy"
*/

#include <stdio.h>
#include <string.h>

char *maskify(char *masked, const char *string) {
    int len = strlen(string);
    int i = 0;
    while (i < len) {
        masked[i] = (i < len - 4) ? '#' : string[i];
        i++;
    }
    masked[len] = '\0';
    return masked;
}

int main(void) {
    char buff[16];
    char *res = maskify(buff, "Batmann!");
    printf("%s\n", res);
}

// Alternate answer
/*
* #include <string.h>
*
* char *maskify(char *masked, const char *string) {
*     int n = strlen(strcpy(masked, string)) - 4;
*     if (n > 0)
*         memset(masked, '#', n);
*     return masked;
* }
*/
