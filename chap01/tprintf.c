/*
 * @Author: tntcpu tntcpu@126.com
 * @Date: 2024-07-08 00:42:50
 * @LastEditors: tntcpu tntcpu@126.com
 * @LastEditTime: 2024-07-08 00:48:42
 * @FilePath: /c_modern/chap01/tprintf.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
int main(void)
{
    int i;
    float x;
    i = 40;
    x = 839.21f;
    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);
    return 0;
}