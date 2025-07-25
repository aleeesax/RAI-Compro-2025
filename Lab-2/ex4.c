#include<stdio.h>
int main(){

     char name[50];
     int studentid;
     float programming, physics, calculus, gpa;

     printf("Enter your name:\n");
     scanf("%[^\n]",name);

     printf("Enter your student id:\n");
     scanf("%d", &studentid);

     printf("Enter your programming score:\n");
     scanf("%2f", &programming);

     printf("Enter your physics score:\n");
     scanf("%2f", &physics);

     printf("Enter your calculus score:\n");
     scanf("%2f", &calculus);

     gpa= (programming + physics + calculus)/3;
     printf("Hi %s(%d) Your GPA is %.2f\n", name, studentid, gpa);

return(0);

}