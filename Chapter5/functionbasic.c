#include<stdio.h>
 void display(); //=> *Function prototype*

 int main()
 {
  int a;
  printf("Intializing Display Function\n");
  display();     //=> *Function call*
  printf("Display Function Disbanded\n");
  return 0;
 }

 void display(){           //=> *Function Definition*
  printf("Hi I am Display\n"); 
 }
