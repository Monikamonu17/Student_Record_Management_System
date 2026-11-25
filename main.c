#include "student.h"
int main()
{
SLL *head=0;
readFile(&head);
char ch;
while(1)
{
printf("***** STUDENT RECORD MENU *****\n\n");
printf("a : Add new record\nd : Delete a record\ns : Show the list\nm : Modify a record\nv : Save records\ne : Exit\nt : Sort the list\nl : Delete all the records\nr : Reverse the list\n\n");
printf("Enter your choice:\n");
scanf(" %c",&ch);
switch(ch)
{
case 'a':addBegin(&head);break;
case 'd':deleteNode(&head);break;
case 's':printNode(head) ;break;
case 'm':modifyData(&head) ;break;
case 'v':saveFile(head);break;
case 'e':exit_sll(&head);return 0; break;
case 't':sortData(&head) ;break;
case 'l':deleteAll(&head) ;break;
case 'r':reverseData(&head);break;
default : printf("invalid choice\n");break;
}
}
return 0;
}
