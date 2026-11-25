#include "student.h"
void exit_sll(SLL **ptr)
{
char ch;
printf("enter option\n");
printf("s : Save and exit\ne : Exit withour saving\n\n");
scanf(" %c",&ch);
switch(ch)
{
case 's': saveFile(*ptr);
printf("Records saved successfully\n");
break;
case 'e':deleteAll(ptr);
printf("Records not saved\n");
break;
default:printf("invalid option\n");
break;

}


}
