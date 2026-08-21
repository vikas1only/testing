//develoed a program to checkt the largest number among 3 number using nested if .
/*#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("a is largest\n");
        }
        else
        {
            printf("c is largest\n");
        }
    }
    else
    {
        if(b>c)
        {
            printf("b is largest\n");
        }
        else
        {
            printf("c is largest\n");
        }
    }
    return 0;
}*/
//developed a program to take a input from user from 1 to 5 where 1 means addition,2 means subtraction,3 means multiplication,
//4 means division and 5 means modulus usding switch case statement.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("enter a value between 1-5\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
            printf("addition=%d\n",a+b);
            break;
        case 2:
            printf("subtraction=%d\n",a-b);
            break;
        case 3:
            printf("multiplication=%d\n",a*b);
            break;
        case 4:
            printf("division=%d\n",a/b);
            break;
        case 5:
            printf("modulus=%d\n",a%b);
            break;
        default:
            printf("invalid input\n");
    }
    return 0;
}