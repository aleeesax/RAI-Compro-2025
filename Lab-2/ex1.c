#include<stdio.h>
int main(){

int integer;
float value;
char name;

printf("Please enter an integer:\n");
scanf("%d",&integer);
printf("You entered:%d\n", integer);
printf("Please enter a float value:\n");
scanf("%f",&value);
printf("You entered:%.1f\n", value);

printf("Please enter acharacter:\n");
scanf("%s",&name);
printf("You entered:%c\n", name);






return(0);

}