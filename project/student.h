#pragma once 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 typedef struct student 
{
int roll_no;
char name[20];
float marks;
struct student *next;
}ST;

void add(ST**);
int countNode(ST*);
void deleteNode(ST**);
void sortData(ST*);
void reverseLink(ST**);
void deleteAll(ST**);
void saveFile(ST*);
void modifyNode(ST*);
void show(ST*);
void ReadFile(ST**);

