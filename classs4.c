//write a prg to lagesst number amog threee number .
#include<stdio.h>
int main() 
{
    int a ,b,c;
    printf("ENTER A NUMBER FOR A:\n");
    scanf("%d",&a);
    printf("ENTER A NUMBER FOR B:\n");
    scanf("%d",&b);
    printf("ENTER A NUMBER FOR C:\n");
    scanf("%d",&c);
    if(a>b>c){
        printf("A IS LARGEST NUMBER\n");
    }
    if(b>c>a){
        printf("B IS LARGEST NUMBER\n");
    }
    else{
        printf("C IS LARGEST NUMBER\n");
    }
    return 0;
}