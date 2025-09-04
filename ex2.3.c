#include <stdio.h>

int main(void){
   int i,n; 
//    char H1,H2,H3,H4,H5,H6,H7,H8; //string => chaine de chara

   int T[1] ;
//    H1="8:00";
//    H2="9:43";
//    H3="11:19";
//    H4="12:47";
//    H5="2:00";
//    H6="3:45";
//    H7="7:00";
//    H8="9:45";
//    int Ha[7]={8,9,11,12,14,15,19,21},Ma[59];

//    for(i=0;i<59;i++){
//     Ma[i]=i+1;
//    }
   do{
    printf("entrer l'heure de depart:  ");
    scanf("%d:%d",&T[0],&T[1]);
   }
    while((T[0]<0||T[0]>23)||(T[1]<0||T[1]>59));
    if((T[0]*60)+T[1]<480 && (T[0]*60)+T[1]>0){
        printf("l'heure de depart est:8h00");
    }
    
      else if((T[0]*60)+T[1]<583 && (T[0]*60)+T[1]>=480){
        printf("l'heure de depart est:9h43");
    }
   
    else if((T[0]*60)+T[1]<679 && (T[0]*60)+T[1]>=583){
        printf("l'heure de depart est: 11h19 ");
    }
    
    else if((T[0]*60)+T[1]<767 && (T[0]*60)+T[1]>=679){
        printf("l'heure de depart est: 12h47");
    }
    
     else if((T[0]*60)+T[1]<840 && (T[0]*60)+T[1]>=767){
        printf("l'heure de depart est: 2h00");
    }
    
     else if((T[0]*60)+T[1]<945 && (T[0]*60)+T[1]>=840){
        printf("l'heure de depart est: 3h45");
    }
    

     else if((T[0]*60)+T[1]<1140 && (T[0]*60)+T[1]>=945){
        printf("l'heure de depart est: 7h00");
    }
    
     else if ((T[0]*60)+T[1]<1305 && (T[0]*60)+T[1]>=1140){
        printf("l'heure de depart est:9h45");
    }
   
   



   
    


    
   
   




    return 0;

}