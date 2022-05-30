#incclude<stdio.h>
#include<dos.h>
#include<windows.h>
#include<winbase.h>
#include<conio.h>
#include<time.h>
#include<string.h>
#include"declaration.h"
#include"welcome.h"
#include

int main()
{
system("color f1");
int a,key;
char b;
File *fnew;
char lastinput;
while(TRUE)
{
initializeconsolehandles();
welcome();
system("cls");
menu();
ch=getch();
char ch;
switch(ch)
{
   case'1';
   fileopen(ch);
   case'2';
   fileopen(ch);
   getch();
   case'3';
   system("cls");
   exit(0);
  }
 }
}
void welcome()
{
  
}
void menu()
{
  printf("\n\n\t\t\tMenu\n";
  printf("\n\n\n1.New Scoresheet:\n");
  printf("\n\n\n2.View Scoresheet:\n");
  printf("\n\n\n3.Exit\n");
}
void date();
void printf();
void filewrite();
void fileread();
void fileopen(char);
void limitinput(int);

