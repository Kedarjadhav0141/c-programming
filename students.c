#include<stdio.h>
int main()
{
    int roll;
    char name[100],s1[100],s2[100],s3[100];
    float m1,m2,m3,total,avg;
    char grade;
    FILE *fp;
    fp = fopen("Result.txt","w");

    printf("Enter your roll number : ");
    scanf("%d",&roll);
    printf("Enter name :");
    scanf("%s",&name);
    printf("Enter subject 1 : ");
    scanf("%s",&s1);
    printf("Enter subject 2 : ");
    scanf("%s",&s2);
    printf("Enter subject 3 : ");
    scanf("%s",&s3);
    printf("Enter marks of subject1 : ");
    scanf("%f",&m1);
    printf("Enter marks of subject2 : ");
    scanf("%f",&m2);
    printf("Enter marks of subject3 : ");
    scanf("%f",&m3);

    total=m1+m2+m3;
    avg=total/3;

    if(avg<=100 && avg>=90)
    grade = 'O';
    else if(avg<=90 && avg>=80)
    grade = 'A';
    else  if(avg<=80 && avg>=70)
    grade = 'B';
    else  if(avg<=70 && avg>=60)
    grade = 'C';
    else  if(avg<=60 && avg>=50)
    grade = 'D';
    else  if(avg<=50 && avg>=35)
    grade = 'E';
    else
    grade = 'F';


    fprintf(fp,"\n---------------RESULT--------------");
    fprintf(fp,"\nRoll Number        :%d",roll);
    fprintf(fp,"\nName               :%s",name);
    fprintf(fp,"\nSubject 1          :%s",s1);
    fprintf(fp,"\nMarks of subject 1 :%f",m1);
    fprintf(fp,"\nSubject 2          :%s",s2);
    fprintf(fp,"\nMarks of subject 2 :%f",m2);
    fprintf(fp,"\nSubject 3          :%s",s3);
    fprintf(fp,"\nMarks of subject 3 :%f",m3);
    fprintf(fp,"\nTotal Marks        :%f",total);
    fprintf(fp,"\nAverage Marks      :%f",avg);
    fprintf(fp,"\nGrade              :%c",grade);
    return 0;
}