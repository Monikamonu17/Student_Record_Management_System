#include "student.h"
void modifyData(SLL **ptr)
{
SLL *pos=*ptr;
char op,name[50],s[50];
float per;
int roll,c=0;
printf("Enter which record to search for modification\n");
printf("r : Search by rollno\nn : Search by name\np : Search by percentage\n\n");
scanf(" %c",&op);
switch(op)
{
case 'r':
a:
pos=*ptr;
c=0;
printf("Enter rollno \n");
scanf("%d",&roll);
while(pos)
{
if(pos->rollno ==roll)
{
printf("%d %s %.2f\n",pos->rollno,pos->name,pos->percentage);
printf("enter the new name\n");
scanf("%s",name);
do
{
printf("enter new percentage\n");
scanf("%f",&per);
if(per<0 || per>=100)
printf("invalid percentage, try again!!\n");
}while(per<0 || per>=100);
strcpy(pos->name,name);
pos->percentage=per;
printf("updated successfully\n");
return;
}
pos=pos->next;
}
break;
case 'n':
c=0;
pos=*ptr;
printf("enter name\n");
scanf("%s",name);
while(pos)
{
if(strcmp(pos->name,name)==0)
{
printf("%d %s %.2f\n",pos->rollno,pos->name,pos->percentage);
c++;
}
pos=pos->next;
}
if(c==1)
{
pos=*ptr;
while(pos)
{
if(strcmp(pos->name,name)==0)
{
printf("enter new name\n");
scanf("%s",s);
do
{
printf("enter new percentage\n");
scanf("%f",&per);
if(per<0 || per>=100)
printf("invalid percentage, try again!!\n");
}while(per<0 || per>=100);
strcpy(pos->name,s);
pos->percentage=per;
printf("updated successfully\n");
return;
}
pos=pos->next;
}
}
else if(c>1)
goto a;
break;
case 'p':
c=0;
pos=*ptr;
printf("enter percentage\n");
scanf("%f",&per);
while(pos)
{
if(pos->percentage==per)
{
printf("%d %s %.2f\n",pos->rollno,pos->name,pos->percentage);
c++;
}
pos=pos->next;
}
if(c==1)
{
pos=*ptr;
while(pos)
{
if(pos->percentage==per)
{
printf("enter new name\n");
scanf("%s",s);
do
{
printf("enter new percentage\n");
scanf("%f",&per);
if(per<0 || per>=100)
printf("invalid percentage, try again!!\n");
}while(per<0 || per>=100);
strcpy(pos->name,s);
pos->percentage=per;
printf("updated successfully\n");
return;
}
pos=pos->next;
}
}
else if(c>1)
goto a;
break;
default:printf("invalid option\n");
break;
}
}
