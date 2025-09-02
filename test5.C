#include <stdio.h>

int main(void){
    float m, m2;
    printf("entrer un montant en dollar :");
    scanf("%f",&m);
    
    m2=((m*5)/100)+m;
    printf("%f",m2);


}