#include<stdio.h>
int main() {
    //factorial 
   /* int a,, c = 1;
    printf("enter the number ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        c=c*i;}
    printf("the factorial of %d is %d \n",a,c);*/
    //fibonacci series
    int b=0,d=1, q=0;
    int f;
    int i=1;
    printf("enter a number  of element should be in the series");
    scanf("%d",&f);
    printf("%d\n",b);

    printf("%d\n",d);
    while( i<=f){
        q=b+d;
        b=d;
        d=q;
        i++;
        printf("%d\n",q);

    }
            
        
        
}