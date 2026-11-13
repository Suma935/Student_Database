#include<stdio.h>
#include"student.h"
void show(ST* ptr)

{
	if(ptr==NULL)
	{
	printf("no records found\n");
       return;
	}
printf("ROLL NO\tNAME\tMARKS\n");
while(ptr!=0)
{
printf("%d\t%s\t%f\n",ptr->roll_no,ptr->name,ptr->marks);
ptr=ptr->next;
}
}       
