#include <stdio.h>
union DATA {int integer; char b[4];};
int main()
{
    union DATA d;
    d.integer = 0x0a0b0c0d;
    printf("%d => %c %c %c %c", d.integer, d.b[0], d.b[1], d.b[2], d.b[3]);
    return 0;
}
