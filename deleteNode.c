#include"student.h"
void deleteNode(SLL **ptr)
{
char op,s[50];
SLL *del=*ptr,*prev;
int roll,c=0;
printf("delete throug\nr : Rollno\nn : name\n\n");
scanf(" %c",&op);
switch(op)
{
case 'r':
a:
printf("enter rollno to be deleted\n");
scanf("%d",&roll);
del=*ptr;
while(del)
{
if(del->rollno==roll)
{
if(del==*ptr)
*ptr=del->next;
else
prev->next=del->next;
free(del);
printf("node deleted successfully\n");
break;
}
prev=del;
del=del->next;
}
break;
case 'n':
c=0;
del=*ptr;
printf("enter name to be deleted\n");
scanf("%s",s);
while(del)
{
if(strcmp(del->name,s)==0)
{
c++;
printf("%d %s %f\n",del->rollno,del->name,del->percentage);
}
del=del->next;
}
del=*ptr;
if(c==1)
{
while(del)
{
if(strcmp(del->name,s)==0)
{
if(del==*ptr)
*ptr=del->next;
else
prev->next=del->next;
free(del);
printf("Node deleted successfully\n");
break;
}
prev=del;
del=del->next;
}
}
else if(c>1)
goto a;
break;
default:printf("invalid option\n");
}

return ;
}
