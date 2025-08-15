#include<stdio.h>
int main(){

    int numbers[10];
    int sum=0;
    float ave;

    for(int i= 0; i<10; i++){
        printf("Enter the number: ");
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }
    ave= sum/ 10.0;
    printf("total sum is %d\n", sum);
    printf("Average is %.2f\n", ave);

    return(0);
}
