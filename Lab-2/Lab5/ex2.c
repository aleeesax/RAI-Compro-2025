#include<stdio.h>
int main(){

int count=1;
int num;
int sum=0;

while(count<=10){
printf("Enter numbers:");
scanf("%d", &num);
sum+= num;
count++;}

printf("total sum is: %d\n", sum);
    return (0);
}