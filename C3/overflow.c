#include <stdio.h>

int main()
{
    int i;

    i = 0xFFFFFFFFFF; // 0x - hexadecimális szám
    i++; 

    // OVERFLOW JELENSÉG:
    //  [11111111]
    // +[00000001]
    // 1[00000000] --> túlfut a memóriaterületből --> leszarja és nem adja össze :D --> 0 lesz az eredmény

    printf("%i", i);
}