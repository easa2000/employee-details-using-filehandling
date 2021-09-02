#include<stdio.h>
void main()
{
    FILE *fp;
    int i;
    char name[20];
    float salary;
    fp = fopen("Details.txt","w");
    if(fp == NULL)
    {
        printf("\n the file could not be opened");
    }
    for(i=0;i<2;i++)
    {
        puts("\n Enter your name: ");
        getchar();
        gets(name);
        puts("\n Enter your salary: ");
        scanf("%f",&salary);
        fprintf(fp," (%d) NAME: %s \t SALARY %5.2f",i+1, name, salary);

    }
    fclose(fp);
}
