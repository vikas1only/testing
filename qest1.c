//make a progrma using elseif statement to print the day of the week based on the number given by the user.
#include<stdio.h>
int main()
{
    int a;
    printf("give me a value between 1-7\n");
    scanf("%d",&a);
    if(a==1){
        printf("monday \n");
    }
    else if(a==2)
    {
        printf("tuesday \n");
    }
    else if(a==3)
    {
        printf("wednesday \n");
    }
    else if(a==4)
    {
        printf("thursday \n");
    }
    else if(a==5)
    {printf("friday \n");}
    else if(a==6)
    {printf("saturday \n");}
    else if(a==7)
    {printf("sunday\n");}
    return 0;
}
//to understand how to skip the else statemnt .
/*#include<stdio.h>
int main()
{   printf("give me a number to check is it even \n");
    int a;
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("the number is even\n");
    }
    return 0;
}
int main()
{
    for(int i=0;i<10;i++)
    {
        printf("the easyy way ");
    }
}
int main()
{
    for(int i=0;i<10;++i)
    {
        printf("the easyy way ");
    }
}
*/












 