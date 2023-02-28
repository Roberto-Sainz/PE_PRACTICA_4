#include <stdio.h>
#include <math.h>
int
main ()
{
  int lado_superior, lado_inferior, menu;
  int cont1, cont2, cont3, cont4;

  printf ("Ingresa valor del lado superior :\n");
  scanf ("%d", &lado_superior);
  printf ("Ingresar valor de lado inferior :\n");
  scanf ("%d", &lado_inferior);


  printf ("\t\t\t\tMENU\t\t\n");

  printf ("1) Indicar si la ficha pertenece a un domino de doble 6.\n");
  printf
    ("2) Indicar si la ficha es una mula y pertenece a un domino de doble 6.\n");
  printf
    ("3) Indicar que ficha es la anterior a esta y cual es la siguiente ficha\n");
  printf
    ("4) Indicar que ficha esta en el renglon anterior y en el siguiente.\n");
  printf ("5) Terminar programa.\n\n");


  scanf ("%d", &menu);



  switch (menu)
    {

    case 1:
      printf ("\nIndicar si la ficha pertenece a un domino de doble 6\n");
      if (lado_superior <= 6 && lado_superior >= 0)
	{
	  if (lado_inferior <= 6 && lado_inferior >= 0)
	    printf ("\nLa ficha pertenece a un domino de doble 6. ");
	  else
	    printf ("\nLa ficha no pertenece a un domino de doble 6. ");
	}
      else
	printf ("\nLa ficha no pertenece a un domino de doble 6");

      break;

    case 2:
      printf
	("\nIndicar si la ficha es una mula y pertenece a un domino de doble 6\n\n");

      if (lado_superior == lado_inferior)
	{
	  if ((lado_superior >= 0 && lado_superior <= 6)
	      && (lado_inferior >= 0 && lado_inferior <= 6))
	    {
	      printf ("\nLa ficha es mula\n");
	      printf ("Pertenece a un domino de doble 6");
	    }
	  else
	    printf ("No pertenece a un domino doble 6");

	}
      else
	{
	  if ((lado_superior >= 0 && lado_superior <= 6)
	      && (lado_inferior >= 0 && lado_inferior <= 6))
	    printf ("No es mula\n");
	  else
	    printf ("No pertenece a un domino doble 6\n");
	}


      break;

    case 3:
      if ((lado_superior >= 0 && lado_superior <= 6)
	  && (lado_inferior >= 0 && lado_inferior <= 6))
	{
	  if (lado_superior < lado_inferior)
	    {
	      if ((lado_superior == 0)
		  && (lado_inferior >= 0 && lado_inferior <= 6))
		{
		  cont1 = lado_superior + 1;
		  printf ("La ficha siguiente es =>%d/%d<=", cont1,
			  lado_inferior);
		}
	      else
		{
		  cont2 = lado_superior - 1;
		  cont1 = lado_superior + 1;
		  printf ("La ficha anterior es =>%d/%d<=\n", cont2,
			  lado_inferior);
		  printf ("La ficha siguiente es =>%d/%d<=", cont1,
			  lado_inferior);
		}
	    }
	  else
	    {
	      if (lado_superior > lado_inferior)
		{
		  if ((lado_inferior == 0)
		      && (lado_superior >= 0 && lado_inferior <= 6))
		    {
		      cont1 = lado_inferior + 1;
		      printf ("La ficha siguiente es =>%d/%d<=",
			      lado_superior, cont1);
		    }
		  else
		    {
		      cont2 = lado_inferior - 1;
		      cont1 = lado_inferior + 1;
		      printf ("La ficha anterior es >%d/%d<=\n",
			      lado_superior, cont2);
		      printf ("La ficha siguiente es =>%d/%d<=",
			      lado_superior, cont1);
		    }
		}
	      else
		{
		  if (lado_superior == lado_inferior)
		    cont2 = lado_superior - 1;
		  printf ("La ficha anterior es =>%d/%d<=", cont2,
			  lado_inferior);
		}
	    }
	}
      else
	printf ("No forma parte del domino doble 6");


      break;

    case 4:
      if ((lado_superior >= 0 && lado_superior <= 6)
	  && (lado_inferior >= 0 && lado_inferior <= 6))
	{
	  if (lado_superior > lado_inferior)
	    {
	      if ((lado_superior == 6)
		  && (lado_inferior >= 0 && lado_inferior <= 6))
		{
		  cont3 = lado_superior - 1;
		  printf ("La ficha anterior es =>%d/%d<=", cont3,
			  lado_inferior);
		}
	      else
		{
		  cont3 = lado_superior - 1;
		  cont4 = lado_superior + 1;
		  printf ("La ficha anterior es =>%d/%d<=\n", cont3,
			  lado_inferior);
		  printf ("La ficha siguiente es =>%d/%d<=", cont4,
			  lado_inferior);
		}
	    }
	  else
	    {
	      if (lado_superior < lado_inferior)
		{
		  if ((lado_inferior == 6)
		      && (lado_superior >= 0 && lado_superior <= 6))
		    {
		      cont3 = lado_inferior - 1;
		      printf ("La ficha anterior es =>%d/%d<=", lado_superior,
			      cont3);
		    }
		  else
		    {
		      cont3 = lado_inferior - 1;
		      cont4 = lado_inferior + 1;
		      printf ("La ficha anterior es =>%d/%d<=\n",
			      lado_superior, cont3);
		      printf ("La ficha siguiente es =>%d/%d<=",
			      lado_superior, cont4);
		    }
		}
	      else
		{
		  if (lado_superior == lado_inferior)
		    {

		      if (lado_superior == 6 && lado_inferior == 6)
			printf ("no hay ni ficha anterior ni siguiente");
		      else
			{
			  cont4 = lado_inferior + 1;
			  printf ("La ficha siguiente es =>%d/%d<=",
				  lado_superior, cont4);
			}
		    }
		}
	    }
	}
      else
	printf ("No forma parte del domino doble 6");

      break;
    case 5:
      printf ("\n\tGood Bye");
      break;
    default:
      printf
	("Opcion no existente,intentelo con unas de las opciones del menu");

      break;
    }
}
