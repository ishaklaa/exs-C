#include <stdio.h>

int main(void){
    int N , i, m, n;
    

      do{
        printf("entrer un nombre:");
        scanf("%d",&N);
        }
        while(N<0 || N>99);
        m=N%10;
        n=N/10;

        printf("%d%d",m,n);

    return 0;
}