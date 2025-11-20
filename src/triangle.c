/*
* Date: 20/11/25
* Problem:
* Implement a function that accepts 3 integer values a, b, c.
* The function should return true if a triangle can be built with the sides of given length
* and false in any other case.
* (In this case, all triangles must have surface greater than 0 to be accepted)
* Ex: 1,2,2 -> true
* Ex: 1,2,9 -> false
* The sum of any two sides of a triangle is greater than the other
*/

#include <assert.h>
#include <stdbool.h>

bool is_triangle(int a, int b, int c) {
    if (a < 0 || b < 0 || c < 0)
        return false;

    if (a + b > c && a + c > b && b + c > a)
        return true;

    return false;
}

int main(void) {
    assert(is_triangle(1, 2, 2) == true);
    return 0;
}
