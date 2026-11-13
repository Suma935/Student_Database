#include<stdlib.h>
#include<string.h>
#include"student.h"
void deleteNode(ST**ptr)
{
        if(*ptr==0)
        {
                printf("no records found");
                return;
        }
        char op; 
        ST* del,*prev;
        del=*ptr;

        printf(
                        "R/r:delete by roll number\n"
                        "N/n:delete by name \n"
                        "M/m:delete by marks \n"
              );
        scanf(" %c",&op);
        switch(op)
        {
                case 'R':
                case 'r':
                        { int roll; 
                                printf("enter roll no to be delete\n");
                                scanf("%d",&roll);
                                while(del)
                                {
                                        if(del->roll_no==roll)
                                        {
                                                if(*ptr==del)
                                                        *ptr=del->next;
                                else
                                                        prev->next=del->next;
                                                        free(del);
                                                        return;
                                                }
                                                prev=del;
                                                del=del->next;
                                        }
    
                                printf("rollno not found\n");
                        }
                        break;
                case 'N':
                case'n':
                        {
                                char names[10];
                                int f=0,roll;

                                printf("enter name to be deleted\n");
                                scanf("%s",names);
                                while(del)
                                {
                                        if(strcmp(del->name,names)==0)
                                        {
                                                printf("%d %s %f\n", del->roll_no,del->name,del->marks);
                                                f=1;
                                        }
                                        del=del->next;
                                }
                                if(f==0)
                                {
                                        printf("name not found\n");
                                        return;
                                }
                                printf("enter the rollno to be deleted:");
                                scanf("%d",&roll);
                                del=*ptr;
                                prev=NULL;
                                while(del)
                                {

                                        if(del->roll_no == roll &&
                                                        strcmp(del->name, names) == 0)
                                                break;

                                        prev = del;
                                        del = del->next;
                                }

                                if(del == NULL)
                                {
                                        printf("Invalid roll number\n");
                                        return;
                                }
                                if(*ptr==del)
                                        *ptr=del->next;
                                else

                                        prev->next=del->next;
                                free(del);

                                printf("record deleted \n");
                        }
                        break;


                case 'M':
                case 'm':
                        {   float mark;
                                printf("enter marks to be delete");
                                scanf("%f",&mark);
                                while(del)
                                {
                                        if(del->marks==mark)
                                        {
                                                if(*ptr==del)
                                                        *ptr=del->next;
                                                else
    
                                                        prev->next=del->next;
                                                        free(del);
                                                        return;
                                                }
                                                prev=del;
                                                del=del->next;
                                        }
    
                                printf("marks not found\n");
                        }
                        break;
                default:printf("unknown choice \n");
                        break;


        }
}
void deleteAll(ST** ptr)
{
        printf("\033[34m********************************\n");
        if(*ptr==0)
{
                printf("no record found\n");

        printf("********************************\033[0m\n");
        return;
}
ST*del=*ptr;
int c=1;
while(del)
{
        *ptr=del->next;
        printf("node position :%d deleted\n",c++);
        free(del);
        del=*ptr;
}
printf("all records deleted\n");
}

                         
