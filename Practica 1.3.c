#include <stdlib.h>
#include <conio.h>

int main(void)
{
printf("practica 1(3)\n");
printf("Sanchez Sayago David R.\n");
printf("1.Suma \n");
printf("2.Resta \n");
printf("3.Multiplicacion\n");
printf("4.Division\n");
printf("Introduce una opcion \n");
int opt;
scanf("%d",&opt);
int a;
int b;
printf("Introduce la primer cantidad \n");
scanf("%d",&a);
printf("Introduce la segunda cantidad \n");
scanf("%d",&b);
int c;
if(opt==1){
c=a+b;
}
else{
if(opt==2){
c=a-b;
}
else{
if (opt==3){
    c=a*b;
}
else {
    c=a/b;
}
}
}
printf("El resultado es:%d",c);
}

