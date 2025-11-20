/*
* Date: 20/11/25
* Problem:
* Given an array of ones and zeroes, convert the equivalent binary value to an integer.
* [0, 1, 1, 0] -> 6
*/

#include <stddef.h>
#include <stdio.h>

unsigned binary_array_to_numbers(const unsigned bits[], size_t count) {
    unsigned result = 0;
    for (size_t i = 0; i < count; i++)
        result = (result << 1) | bits[i];
    return result;
}

int main(void) {
    unsigned bits[4] = {1, 1, 1, 1};
    unsigned res = binary_array_to_numbers(bits, 4);
    printf("%u\n", res);
    return 0;
}
