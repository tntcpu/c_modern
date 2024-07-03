// 根据用户输入计算箱子重量
#include <stdio.h>
int main(void)
{
    int height, length, weight, width, volume;
    printf("height:");
    scanf("%d",&height);
    printf("length:");
    scanf("%d",&length);
    printf("width:");
    scanf("%d",&width);
    volume = height * length * width;
    weight = (volume + 165) / 166;
    printf("Dimensions: %dx%dx%d\n", length, weight, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);
    return 0;
}