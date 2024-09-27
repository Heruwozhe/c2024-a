#include <stdio.h>
#include <math.h>
#include <time.h>
int if_prime(int num) {
    int i = 2;
    int dividing_number =(int)sqrt(num);
    for(;i<dividing_number+1;i++) {
        if(num%i==0) {
            return 0;
        }
    }
    if(i==dividing_number+1)
        return 1;
}
int main(void) {
    clock_t start_time=clock();
    int i = 2;
    for(;i<998;i++) {
        if(if_prime(i)==1)
            printf("%d\t",i);
    }
    clock_t end_time=clock();
    putchar('\n');
    printf("The running time is %.4f seconds",(end_time-start_time)/1000.0);
    return 0;
}
//差不多这样了,再如何优化确实想不到了