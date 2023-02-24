#include <stdio.h>
#include <math.h>
int main() {

  printf("1) Calcular el area de un triangulo\n");
  printf("2) Calcular el perimetro de un triangulo\n");
  printf("3) Conocer el tipo de triangulo que se forma\n");
  printf("4) Terminar el programa\n");
  int opccion;
  scanf("%d",&opccion);
  float base,altura,operacion,valora,valorb,valorc,perimetro,lado1,lado2,lado3;
  switch(opccion){

    case 1:
       printf("\t\tCalcular el area de un triangulo\n");
      printf("Ingrse la base del triangulo :\n");
      scanf("%f",&base);
      printf("Ingrese altura del triangulo :\n");
      scanf("%f",&altura);
      //operacion
      operacion=base*altura/2;
      printf("la area es %.2f",operacion);
      
     
    break;

    case 2:
      printf("\t\tCalcular el perimetro de un triangulo\n");
    printf("Ingrese valor de a :\n");
      scanf("%f",&valora);
      printf("Ingrese el valor de b :\n");
      scanf("%f",&valorb);
      printf("Ingrese el valor de c :\n");
      scanf("%f",&valorc);
      //operacion
      perimetro=valora+valorb+valorc;
      printf("El perimetro es %.2f",perimetro);
    
    break;

    case 3:

      printf("\t\tConocer el tipo de triangulo que se forma\n");
      printf("\nInsertar Lado 1:");
    scanf("%f",&lado1);
    printf("Insertar Lado 2:");
    scanf("%f",&lado2);
    printf("Insertar Lado 3:");
    scanf("%f",&lado3);
if((lado1+lado2>lado3) && (lado1+lado3>lado2) && (lado2+lado3>lado1)){
if(lado1==lado2 && lado2==lado3 && lado1==lado3){
printf("\n=>Es Un Triangulo Equilatero<=\n");
}
else if(lado1==lado2 || lado1==lado3 || lado2==lado3){

printf("\n=>Es Un Triangulo Isoceles<=\n");

}else

printf("\n=>Es Un Triangulo Escaleno<=\n");
  }
else{

printf("\n=>No Es Triangulo<=\n");
  }
    break;

    case 4:
    printf("\n\t\tGood Bye");
    break;
    default:
    printf("Opcion no existente,intentelo con unas de las opciones del menu");
    break;
    }
}
