#include<stdio.h>
#include<stdlib.h>
#include"student.h"
void add(ST**ptr)// CALL BY REFERNCE AS WE ARE MODIFYING THE DATA
{
        ST*new;
        new= malloc(sizeof(ST));
        if(new==NULL)
        {
                printf("memory not available\n ");
                return;
        }
        int roll=1, found;
        ST*temp;
        while(1)
        {
                found=0;
                temp=*ptr;
                while(temp!=NULL)
                {
                        if(temp->roll_no==roll)
                        {
                                found=1;
                                break;
                        }
                        temp=temp->next;
                }
                if(found==0)
                        break;
                roll++;
        }
        new->roll_no=roll;
                printf("enter name and marks\n");
                scanf(" %s %f/n",new->name,&new->marks);
                new->next=0;
                if(*ptr==0)
                        *ptr=new;
                else{
                        ST* last =*ptr;
                        while(last->next)
                                last=last->next;
                        last-> next=new;
                }
        }

