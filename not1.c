#include<stdio.h>
int main()
{
    int a=122,b=119;
    printf("bitwise add%d\n",a&b);
    printf("bitwise OR%d\n",a|b);
    printf("bitwise XOR%d\n",a^b);
    printf("bitwise not%d\n",~a);
    printf("bitwise not%d\n",~b);
    printf("bitwise left%d\n",a<<1);
    printf("bitwise right%d\n",a>>1);
    return 0;
}
