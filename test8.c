#include <stdio.h>
#include <math.h>

int main(void){
    int p, I, c,n,C,i;
    i=1;
    do{
       printf("entrer votre infos:");
       scanf("%d %d %d %d %d", &p ,&I ,&c, &n, &C); /* code */
       i++;
    }
    // while ((p!=978 && p!=979) || (I<0 || I>9));
    while ((p!=978 && p!=979) || (I<0 || I>9) || (c<0 || c>999) || (n<0 || n>99999) || (C<0 || C>9));
    
    printf("l'ISBN:%d-%d-%d-%d-%d", p, I , c , n , C );
    return 0;
    

}