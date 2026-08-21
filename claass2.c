#include<stdio.h>
int main(){
    printf("Hello, World we will do bitwise "); 
    int a=12,b=8;
    printf("add =%d\n",a&b);
    printf(" substrat =%d\n",a|b);
    printf("XOR =%d\n",a^b);
    printf("left shift =%d\n",a<<1);
    printf("right shift =%d\n",b>>1);
    printf("not=%d\n",~a);
    return 0;
}