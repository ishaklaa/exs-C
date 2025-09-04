#include <stdio.h>

int main(){
    int N, S;
        printf("entrer la note");
        scanf("%d",&N);
        S=N/10;
        switch(S){
            case 1 : printf("Note litterale : F");
                     break;
            case 2 : printf("Note litterale : F");
                     break;
            case 3 : printf("Note litterale : F");
                     break;
            case 4 : printf("Note litterale : F");
                     break;
            case 5 : printf("Note litterale : F");
                     break;
            case 6 : printf("Note litterale : D");
                     break;
            case 7 : printf("Note litterale : C");
                     break;
            case 8 : printf("Note litterale : B");
                     break;
            case 9 : printf("Note litterale : A");
                     break;
            case 10 : printf("Note litterale : A");
                     break;

            // default: printf("erreur:le nombre doit etre 0 rt 100");
            default:
            if (S<1)
            {
               printf("Note litterale : F");
            
            }
            else{
                 printf("erreur:le nombre doit etre 0 rt 100");
            }
            

        }
    
    



    return 0;
}
