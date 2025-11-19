/*
* Armstrong number is a positive which is the sum of its own digits,
* each raised to the power of the number of digits.
* The result is equal to its own digits.
* Ex: 153 -> 1^3 + 5^3 + 3^3 -> 153
*/

#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool narcissistic(int num) {
    char buff[16];
    snprintf(buff, sizeof(buff), "%d", num);
    int digits = strlen(buff);

    char *ptr = buff;
    int res = 0;
    for (int i = 0; i < digits; i++) {
        res = pow((*ptr - '0'), digits) + res;
        ptr++;
    }
    return res == num ? true : false;
}

int main(void) {
    if (narcissistic(153) == true)
        return 0;
    return 1;
}

// Alternative answer
/*
* #include <stdbool.h>
* #include <math.h>
*
* bool narcissistic(int num) {
*     int p = log10(num) + 1;
*     int n = num;
*     do {
*         num -= pow(n % 10, p);
*     } while (n /= 10);
*     return !num;
* }
*/
