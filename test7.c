#include <stdio.h>
#include <math.h>

 int main(void){
    int  m, a , b , c ,d ;
    

    printf("entrer un montant en dollar");
    scanf("%d",&m);
    a=m/20;
    
    b=(m%20)/10;
    c=((m%20)%(10))/5;
    d=(((m%20)%(10))%5)/1;
    if(a>0){
        printf("billetsde 20 dollar %d\n",a);
    }
    if(b>0){
        printf("billetsde 10 dollar %d\n",b);
    }
    if (c>0){
        printf("billetsde 5 dollar %d\n",c);

    }
    if (d>0){
        printf("billetsde 1 dollar %d\n",d);
    }
    
    
    return 0;
 }