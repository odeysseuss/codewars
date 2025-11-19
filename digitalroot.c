/*
* Digital root is a *recursive* sum of all digits
* Ex: 942  ->  9 + 4 + 2 = 15  ->  1 + 5 = 6
*/

#include <stdio.h>

int digital_root(int n) {
    if (n < 10)
        return n;

    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return digital_root(sum);
}

int main(void) {
    int res = digital_root(942);
    printf("%d\n", res);
    return 0;
}

// Alernate answer
/*
* int digital_root(int n) {
*     return n ? (n - 1) % 9 + 1 : 0;
* }
*/
