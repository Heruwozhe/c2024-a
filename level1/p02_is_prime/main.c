#include <stdio.h>
#include <math.h>
int main(void){
    int num = 0;int i = 2;
    printf("Please enter a positive integer:");
    scanf_s("%d", &num);
    int dividing_number =(int)sqrt(num);
    for(;i<dividing_number+1;i++) {
        if(num%i==0) {
            printf("The number is not prime.");
            break;
        }
    }
    if(i==dividing_number+1)
        printf("The number is prime.");
    return 0;
}