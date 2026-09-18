#include<stdio.h>
int main() {
    int a=0,b=1,c=0,d;
    char ch[d+1];
    printf("enter the number of element will be ");
    scanf("%d",&d);
    printf("%d\n",a);
    printf("%d\n",b);
    for(int i=0;i<=d;i++){
        c=a+b;
        a=b;
        b=c;
        printf("%d\n",c);
       ch[i]=c;}
    ch[d]='\0';
    printf("%s", ch);
    
    
}
