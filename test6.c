#include <stdio.h>
#include <math.h>

int main(void){
    float x,p;
    printf("entrer un nombre:");
    scanf("%f",&x);
    p=3*(x*x*x*x*x)+2*(x*x*x*x)-5*(x*x*x)-(x*x*x)+7*x-6;
    printf("%4.0f",p);




    return 0;
}