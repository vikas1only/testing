/*#include<stdio.h>
void main(){
    int num;
    int value;
    int f=1;
    printf("enter a number ");
    scanf("%d",&num);
    for(value=1;value<=num;value++)
    { f=f*value;}
    printf("the facrtorial of %d is %d",num,f);
    
}
*/
/*#include<stdio.h>
int main()
{
   for(int i=1;i<=6;i++)
   {
        for (int j = 0; j <= i; j++)
        {
              printf("%d ", j );}
      printf("\n");}
    return 0;

    
}*/
#include<stdio.h>
int main()
{  int a;
    printf("enter a number ");
    scanf("%d",&a);
    if (a%2==0 )
       if(a==2)
        { printf("the number is prime");}
       else
        {
        printf("the number is even");}
    else 
    { printf("the number is prime ");}
    
    return 0;
}