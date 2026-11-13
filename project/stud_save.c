#include<stdio.h>
#include<stdlib.h>
#include"student.h"
void saveFile(ST*ptr)
{

FILE*fp;
fp=fopen("student.dat","w");
if(fp==0)
{
printf("file openong failed\n");
return;
}
while(ptr)
{       
        fprintf(fp,"%d %s %f\n",ptr->roll_no,ptr->name,ptr->marks);
        ptr=ptr->next;
}
printf("Data savedin the file \n");
fclose(fp);
}
void ReadFile(ST**ptr)
{
ST*new;
        FILE*fp;
        fp=fopen("student.dat","r");
        if(fp==0)
        {
                printf("studentdata base not presnt\n");
                return ;
        }
        while(1)
        {
                new=malloc(sizeof(ST));
if(new==NULL)
break;

                if(fscanf(fp,"%d %s %f",&new->roll_no,new->name,&new->marks)!=3)
{
                   free(new);
                        break;
}
                new->next=0;
                if(*ptr==0)
                        *ptr=new;
                else
                {
                        ST*last=*ptr;
                        while(last->next)
                                last=last->next;
                        last->next=new;
                }
        }
fclose(fp);
}
  
