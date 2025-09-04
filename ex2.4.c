#include <stdio.h>

int main(){
    int T[2],L[2];
    do{
        printf("entrer une date :");
        scanf("%d %d %d",&T[0],&T[1],&T[2]);
    }
    while((T[0]<0||T[0]>31)||(T[1]<0||T[1]>12)||(T[2]<0||T[2]>2025));
    do{
        printf("entrer une deuxieme date :");
        scanf("%d %d %d",&L[0],&L[1],&L[2]);
    }
    while((L[0]<0||L[0]>31)||(L[1]<0||L[1]>12)||(L[2]<0||L[2]>2025));
    if (L[2]>T[2]){
        printf("%d-%d-%d est la date la plus ancienne.",T[0],T[1],T[2]);
    }
    else if ((L[2]==T[2])&&(L[1]>T[1])){
         printf("%d-%d-%d est la date la plus ancienne.",T[0],T[1],T[2]);

    }
    else if((L[2]==T[2])&&(L[1]==T[1])&&(L[0]>T[0])){
         printf("%d-%d-%d est la date la plus ancienne.",T[0],T[1],T[2]);


    }
    else{
        printf("%d-%d-%d est la date la plus ancienne.",L[0],L[1],L[2]);
    }




    return 0;
}
