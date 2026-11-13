#include<stdio.h>
#include<stdlib.h>
#include"student.h"
void modifyNode(ST*ptr)
{
char op;
        printf("enter which record to search for modification\n"
                        "R/r:search by roll number\n"
                        "N/n:search by name\n"
                        "P/p:search by percentage\n");
        scanf(" %c",&op);
        switch(op)
        {

                case 'R':
                case 'r':
                        {

                                if(ptr==0)
                                {
                                        printf(" no records found\n");
                                        return ;
                                }
                                int roll;
                                int f=0;
                                printf("enter roll no to search \n");
                                scanf("%d",&roll);
                                while(ptr)
                                {
                                        if(roll==ptr->roll_no)
                                        {
                                                printf("%d %s %f\n", ptr->roll_no, ptr->name,ptr->marks);
                                                f=1;
                                                break;
                                        }
                                        ptr=ptr->next;
                                }
                                if(f==0)
                                        printf("num not found\n");
                        }
break;

                case 'N':
                case 'n':
                        {
                                if(ptr==0)
                                {
                                        printf(" no records found\n");
                                        return ;
                                }    
                                char names[20];
                                int f=0;
                                printf("enter name to search \n");
                                scanf("%s",names);
                                while(ptr)
                                {
                                        if(strcmp(names,ptr->name)==0)
                                        {
                                                printf("%d %s %f\n", ptr->roll_no, ptr->name,ptr->marks);
                                                f=1;
                                                break;
                                        }
                                        ptr=ptr->next;
                                }   
                                if(f==0)
                                        printf("name not found\n");
                        }
break;
                case 'P':
                case 'p':
                        {
                                if(ptr==0)
                                {
                                        printf(" no records found\n");
                                        return ;
                                }
                        float mark; 
                                int f=0;
                                printf("enter marks to search \n");
                                scanf("%f",&mark);
                                while(ptr)
                                {
                                        if(mark==ptr->marks)
                                        {
                                                printf("%d %s %f\n", ptr->roll_no, ptr->name,ptr->marks);
                                                f=1;
                                                break;
                                        }
                                        ptr=ptr->next;
                                }
                                if(f==0)
                                        printf("marks not found\n");
                        }
break;
        }
}


void reverseLink(ST**ptr)
{
        int i;
        if(*ptr==0)
        {
                printf("no records found\n");
                return;
        }
        int c= countNode(*ptr);
        if(c>1)
        {
                ST*temp=*ptr;
                ST **a= malloc(sizeof( ST*)*c);
                for(i=0;i<c;i++)
                {
                        a[i]=temp;
                        temp=temp->next;
                }
                for(i=c-1;i>0;i--)
                        a[i]->next=a[i-1];
                a[0]->next=0;
                *ptr=a[c-1];
        }
        show(*ptr);
}
int countNode(ST*ptr)
{
        int c=0;
        while(ptr)
        {
                c++;
                ptr=ptr->next;
        }
        return c;
}
void sortData(ST*ptr)
{
        if(ptr==0)
        {
                printf("no records found \n");
                return ;
        }
        char op;
        printf("enter which record to search for modification\n"
                        "N/n:sort by name\n"
                        "P/p:sort by percentage\n");
        scanf(" %c",&op);
        switch(op)
        {

                case 'N':
                case 'n':
                        {
                                ST* p1=ptr,*p2,t;
                                int i, j , c=countNode(ptr);
                                for(i=0;i<c-1;i++)
                                {
                                        p2=p1->next;
                                        for(j=0;j<c-1-i;j++)
                                        {
                                                if(strcmp(p1->name,p2->name)>0)
                                                {
                                                        t.roll_no=p1->roll_no;
                                                        t.marks=p1->marks;
                                                        strcpy(t.name,p1->name);
                                                        p1->roll_no=p2->roll_no;
                                                        strcpy(p1->name,p2->name);
                                                        p1->marks=p2->marks;
                                                        p2->roll_no=t.roll_no;
                                                        strcpy(p2->name,t.name);
                                                        p2->marks=t.marks;
                                                }

                                                p2=p2->next;
                                        }
                                        p1=p1->next;
                                }
                        show(ptr);
           }
                        break;
                case'P':
                case'p':
                        {
                                ST* p1=ptr,*p2,t;
                                int i, j , c=countNode(ptr);
                                for(i=0;i<c-1;i++)
                                {
                                        p2=p1->next;
                                        for(j=0;j<c-i-1;j++)
                                        {
                                                if(p1->marks<p2->marks)
                                                {
                                                        t.roll_no=p1->roll_no;
                                                        t.marks=p1->marks;
                                                        strcpy(t.name,p1->name);
                                                        p1->roll_no=p2->roll_no;
                                                        strcpy(p1->name,p2->name);
                                                        p1->marks=p2->marks;
                                                        p2->roll_no=t.roll_no;
                                                        strcpy(p2->name,t.name);
                                                        p2->marks=t.marks;
                                                }

                                                p2=p2->next;
                                        }
                                        p1=p1->next;
                                }
show(ptr);
			}
                        break;
                default:printf("invalid option");

	}
}	
