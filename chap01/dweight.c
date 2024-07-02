// 计算12" * 10" * 8"箱子的重量
#include <stdio.h>
int main(void)
{
    int height, length, weight, width, volume;
    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    weight = (volume + 165) / 166;
    printf("Dimensions: %d%d%d\n", length, weight, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);
    return 0;
}