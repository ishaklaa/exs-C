#include <stdio.h>
int main(void){

int height, lenght, width, volume,weight;

height = 7;
lenght = 5;
width = 10;
volume= height * lenght * width;
weight = (volume+165)/166;

printf("dimensions: %dx%dx%d\n" ,height, lenght, width);
printf("volume=%d",volume);
return 0;
}



