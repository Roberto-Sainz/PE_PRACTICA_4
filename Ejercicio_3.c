#include <stdio.h>
int main ()
{

  int valor, palo, menu;

  printf ("Ingrese el valor de la carta :\n");
  scanf ("%d", &valor);
  printf ("Ingrese el palo de la carta :\n");
  printf ("\n1) =>Trebol\n2) =>Picas\n3) =>Corazon\n4) =>Diamante\n:");
  scanf ("%d", &palo);

  //////////////MENU DE OPCIONES/////////////////////
  printf ("\t\t\t\tMENU\t\t");
  printf ("\n1) Indicar si la carta pertenece a una baraja\n");
  printf ("2) Indicar el valor de la carta de la forma\n");
  printf ("3) Indicar el palo de la carta\n");
  printf ("4) Terminar el programa\n");
  scanf ("%d", &menu);


  ////////////////////////////////////////////////////////
  switch (menu)
    {

    case 1:
      printf ("\t\tIndicar si la carta pertenece a una baraja\n");
      if (valor >= 1 && valor <= 13)
	{

	  printf ("La carta pertenece ala baraja");
	}
      else
	printf ("La carta no pertenece ala baraja");

      break;

    case 2:
      printf ("\t\tIndicar el valor de la carta de la forma\n");

      if (valor == 2 || valor == 3 || valor == 4 || valor == 5 || valor == 6
	  || valor == 7 || valor == 8 || valor == 9 || valor == 10)
	printf ("El valor de la carta es => %d", valor);
      else if (valor == 1)
	printf ("El valor de la carta es => A");
      else
	{



	  if (valor == 13)
	    printf ("El valor de la carta es => K");
	  else if (valor == 12)
	    printf ("El valor de la carta es => Q");
	  else if (valor == 11)
	    printf ("El valor de la carta es => J");
	  else
	    printf ("Valor de la carta no existente");
	}

      break;

    case 3:

      printf ("\t\tIndicar el palo de la carta\n");
      if (palo == 1)
	printf ("El palo de la carta es Trebol\n");
      else if (palo == 2)
	printf ("El palo de la carta es Picas\n");
      else if (palo == 3)
	printf ("El palo de la carta es Corazon\n");
      else if (palo == 4)
	printf ("El palo de las cartas es Diamante");
      else
	printf ("Palo de carta no existente");
      break;

    case 4:
      printf ("\n\t\tGood Bye");
      break;
    default:
      printf
	("\nOpcion no existente,intentelo con unas de las opciones del menu");
      break;
    }
  return 0;
}
