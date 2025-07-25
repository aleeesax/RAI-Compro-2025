#include<stdio.h>
int main(){

int a;
float h;
char name[50];
char univ[50];

printf("Enter your full name:");
scanf(" %[^\n]", name);
printf("Enter your age:");
scanf("%d",&a);
printf("Enter your height:");
scanf("%f",&h);
printf("Enter University name:");
scanf(" %[^\n]", univ);

printf("Hi! Everyone. This is K. %s from %s. I am %d yrs old and my height is %3.1f cm tall", name,univ,a,h);

     return(0);
}