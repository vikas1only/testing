#include<stdio.h>
int main()
{
    char name[40];
    char gender;
    int rollno;
    float sub1,sub2,sub3,total,percentage;
    printf("enter your name\n");
    scanf("%s",name);
    printf("enter your gender in M or F:\n");
    scanf("  %c",&gender);
    printf("enter your roll number\n");
    scanf("%d",&rollno);
    printf("enter marks of three subjects\n");
    printf("enter a subject 1 marks :\n");
    scanf("%f",&sub1);
    printf("enter a subject 2 marks :\n");
    scanf("%f",&sub2);
    printf("enter a subject 3 marks :\n");
    scanf("%f",&sub3);
    total=sub1+sub2+sub3;
    percentage=(total/300)*100;
    printf("*********student marksheet*********\n");
    printf("NAME:%s\n",name);
    printf("GENDER:%c\n",gender);
    printf("ROLL NUMBER;%d\n",rollno);
    printf("SUBJECT 1 MARKS:%f\n",sub1);
    printf("SUBJECT 2 MARKS:%f\n",sub2);
    printf("SUBJECT 3 MARKS:%f\n",sub3);
    printf("TOTAL MARKS:%f\n",total);
    if(percentage>=90)
    {
        if(percentage>=95)
        {printf("grade A+\n");}
        else
        {printf("grade A\n");}
    }
    else if(percentage>=80)
    { printf("grad  B\n");}
    else if(percentage>=70)
    { printf("grade C\n");}
    else if(percentage>=60)
    { printf("grade D\n");}
    else
    { printf("fail\n");}
    return 0;
    }

