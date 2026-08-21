//to find a character is in uppercase or lwer case
#include<stdio.h>
int main()
{
    char a ;
    printf("enter the charcter ");
     scanf("%c",&a);
     if (a>='A' && a<='Z'){
        printf("the character is in uppercase\n");
     }
     else if(a>='a' && a<='z'){
        printf("the character is in lowercase\n");
     }
     else{
        printf("the character is not an alphabet\n");
     }
     elif(a>='0'&& a<='9')
     {printf('the nunber is in digit\n');
     }
     else{
        printf("the character is not an alphabet\n");
     }


}