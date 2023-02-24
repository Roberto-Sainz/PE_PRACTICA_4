#include <stdio.h>
#include <math.h>
int main() {

  printf("1) Determinar si el numero es par o impar\n");
  printf("2) Elevar un numero a una potencia\n");
  printf("3) Calcular la raiz cuadrada de un numero\n");
  printf("4) Terminar el programa\n");
  int opccion;
  scanf("%d",&opccion);
  int n,np,potencia;
  float operacion,nr,raizcuadrada;
  switch(opccion){

    case 1:
       printf("\t\tDeterminar si el número es par o impar\n");
      printf("Ingrse Un Numero :\n");
      scanf("%d",&n);
     if (n % 2==0){
          printf("El numero es par");
        }else
          printf("El numero no es par");

    break;

    case 2:
      printf("\t\tElevar un numero a una potencia\n");
    printf("Ingrese el numero que desee elevar a una potencia :\n");
      scanf("%d",&np);
      printf("Ingrese la potencia :\n");
      scanf("%d",&potencia);
      //operacion
      operacion=pow(np,potencia);
      printf("El numero %d ala potencia %d es %.2f",np,potencia,operacion);
      
    break;

    case 3:

      printf("\t\t Calcular la raiz cuadrada de un numero\n");
      printf("Ingresa el numero que desea calcular su raiz cuadrada :\n");
      scanf("%f",&nr);
    //operacion
      raizcuadrada=sqrt(nr);
      printf("\nLa raiz cuadrada de %.2f es %.2f",nr,raizcuadrada);
    break;

    case 4:
    printf("\n\t\tGood Bye");
    break;
    default:
    printf("Opcion no existente,intentelo con unas de las opciones del menu");
    break;
    }
}
