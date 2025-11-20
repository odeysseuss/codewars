/*
* Date: 20/11/25
* Problem:
* any case to camelCase or PascalCase(if first word is already uppercase)
*/

#include <ctype.h>
#include <stdio.h>

void to_camel_case(const char *text, char *camel) {
    int i = 0;
    int j = 0;
    while (text[i] != '\0') {
        if (text[i] == ' ' || text[i] == '-' || text[i] == '_') {
            i++;
            camel[j] = toupper(text[i]);
            goto inc;
        } else {
            camel[j] = text[i];
            goto inc;
        }
    inc:
        i++;
        j++;
    }
    camel[j] = '\0';
}

int main(void) {
    char camel[64];
    to_camel_case("the_stranger_Things", camel);
    printf("%s\n", camel);
    return 0;
}

// Alternate answer
/*
* void to_camel_case(const char *text, char *camel) {
*   for (; *text; ++text)
*     *camel++ = ((*text == '-' || *text == '_') ? (*(++text) & 0xffffffdf) : *text);
*   *camel = 0;
* }
*/
