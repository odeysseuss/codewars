/*
* Date: 20/11/25
* Problem:
* takes an array and moves all the zeroes to the end preserving the order of other elemss
* [1, 2, 0, 1, 0, 1, 0, 3, 0, 1] -> [1, 2, 1, 1, 3, 1, 0, 0, 0, 0]
*/

#include <stdio.h>

void move_zeros(int len, int arr[len]) {
    int j = 0;
    for (int i = 0; i < len; i++) {
        if (arr[i] != 0) {
            arr[j] = arr[i];
            j++;
        }
    }
    while (j < len) {
        arr[j] = 0;
        j++;
    }
}

int main(void) {
    int arr[] = {1, 2, 0, 1, 0, 1, 0, 3, 0, 1};
    int len = sizeof(arr) / sizeof(arr[0]);
    move_zeros(len, arr);
    for (int i = 0; i < len; i++) {
        printf("%d\n", arr[i]);
    }
}
