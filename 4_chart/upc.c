//
// Created by gpscpu on 2021-6-10.
//
#include <stdio.h>

int main(void) {
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
            first_sum, second_num, total;

    printf("enter the first (single) digit: ");
    scanf("%1d", &d);
    printf("enter first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
    printf("enter second group of five digit: ");
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_num = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_num;

    printf("check digit: %d\n", 9 - ((total - 1) % 10));
    return 0;
}
