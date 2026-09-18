#include<stdio.h>
int main()
{
    char name[40];
    char gender;
    int rollno;
    float sub1,sub2,sub3,total,percentage;
    printf("enter your name");
    scanf("%s",name);
    printf("enter your gender in M or F:");
    scanf(" %c",&gender);
    printf("enter your roll number");
    scanf("%d",&rollno);
    printf("enter marks of three subjects");
    printf("enter a subject 1 marks :");
    scanf("%f",&sub1);
    printf("enter a subject 2 marks :");
    scanf("%f",&sub2);
    printf("enter a subject 3 marks :");
    scanf("%f",&sub3);
    total=sub1+sub2+sub3;
    percentage=(total/300)*100;
    printf("*********student marksheet*********\n");
    printf("NAME:%s\n",name);
    printf("GENDER:%c\n",gender);
    printf("ROLL NUMBER: %d\n",rollno);
    printf("SUBJECT 1 MARKS:%f\n",sub1);
    printf("SUBJECT 2 MARKS:%f\n",sub2);
    printf("SUBJECT 3 MARKS:%f\n",sub3);
    printf("TOTAL MARKS:%f\n",total);
    printf("PERCENTAGE:%f\n",percentage);
    if(percentage>=90)
    { if(percentage>=95)
        {printf("grade A+\n");}
        else
        {printf("grade A\n");} }
    else if(percentage>=80)
    { printf("grade B\n");}
    else if(percentage>=70)
    { printf("grade C\n");}
    else if(percentage>=60)
    { printf("grade D\n");}
    else if(percentage>=50)
    { printf("grade E\n");}
    else
    { printf("fail\n");}
    return 1;
}

