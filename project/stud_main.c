#include<stdio.h>
#include"student.h"
int main()
{
        ST *headptr=0;
        char op;

        ReadFile(&headptr);
        while(1)
        {
                printf("\033[34m"
                                "a/A:Add new record\n"
                                "d/D:Delete a record\n"
                                "s/S:show the list\n"
                                "m/M:Modify a record\n"
                                "v/V:save records\n"
                                "e/E:exit\n"
                                "t/T:sort the list\n"
                                "l/L:delete all the records\n"
                                "r/R:Reverse the list\n"

                                "ENTER YOUR CHOICE:\n"
                                "\033[0m");
                scanf(" %c",&op);
                switch(op)
                {
                        case 'A':
                        case'a':
                                add(&headptr);
                                break;
                        case 'D':
                        case'd':
                                deleteNode(&headptr);
                                break;
                        case 'S':
                        case's':
                                show(headptr);
                                break;
                        case 'M':
                        case'm':
                                modifyNode(headptr);
                                break;

                        case 'V':
                        case'v':
                                {
                                saveFile(headptr);
                               // ReadFile(&headptr);
                                 }
                                break;
                        case 'E':
                        case'e':
                                {
                                        char ch ;
                                        printf("S/s.Save and Exit\n");
                                        printf("e/E.Exit without Saving\n");
                                        printf("enter your choice\n");
                                        scanf(" %c",&ch);
                                        switch(ch)
                                        {
                                                case 's':
                                                case 'S':{
                                                                         saveFile(headptr);
                                                                 return 0;
                                                         }
                                                         break;
                                                case 'e':
                                                case 'E':
                                                         {
                                                                 printf("exited without saving");
                                                                 return 0;
                                                         }
                                                         break;
                                                default:printf("invalid option");
                                                        break;
                                        }
                                }
                        case 'T':
                        case't':
                                sortData(headptr);
                                break;

                        case 'L':
                        case'l':
                                deleteAll(&headptr);
                                break;
                        case 'R':
                        case'r':
                                reverseLink(&headptr);
                                break;
                        default:
                                printf("unknown choice\n");
                }
        }
}
