#include<stdio.h>
void main()
{
int alfa[6],  lap[200], multiplosDe13[8], veinte6Elementos[26], verde[18], viceversa[10], viceversa2[20], viceversa1[10];
int  acum, m, i, j, estatura[45], calificaciones[11], cuadrado[32];
float promedioPesos, karatePesos[35], beta[6], azul[6], funcion[8], x, y, xy; //lavariable azul no especifica cuantos elementos se agregaran
char caracter;

//1. La declaración de un vector llamado “alfa” de 6 elementos numéricos enteros,
//que tendrán los valores de 5, 3, 8, 43, 91, 6.
// printf(" 1. \n  ");
// for (i=0;i<=5;i++)
// {
//     switch(i)  // 5 3 8 43 91 6
//     {
//         case 0:
//         alfa[i]=5;
//         break;
//         case 1:
//         alfa[i]=3;
//         break;
//         case 2:
//         alfa[i]=8;
//         break;
//         case 3:
//         alfa[i]=43;
//         break;
//         case 4:
//         alfa[i]=91;
//         break;
//         case 5:
//         alfa[i]=6;
//         break;
//     }
//     printf("%d,  ", alfa[i]);

// }
// printf("\n");
// printf(" 2. \n  ");
// //2. La declaración de un vector llamado “beta” que almacene los siguientes
// //valores: 34 45.6 56.2 67 12.8 94
// for (i=0;i<=5;i++)
// {
//     switch(i)  // 34 45.6 56.2 67 12.8 94
//     {
//         case 0:
//         beta[i]=34;
//         break;
//         case 1:
//         beta[i]=45.6;
//         break;
//         case 2:
//         beta[i]=56.2;
//         break;
//         case 3:
//         beta[i]=67;
//         break;
//         case 4:
//         beta[i]=12.8;
//         break;
//         case 5:
//         beta[i]=94;
//         break;
//     }
//     printf("%.2f,  ", beta[i]);

// }
 //3. La inicialización con valores de cero para un vector llamado “lap” que contiene
 //200 elementos numéricos reales.
 //lap[200],
// printf("\n 3. \n  ");
//     for (i=1;i<=200;i++)
//     {
//         lap[i]= 0;
//     }
//     printf("%d \n", lap[99]);
// printf("\n");
// printf(" 4. \n  ");
//4. Codifique un programa que defina un vector de 8 elementos y los llene con
//números enteros múltiplos de 13. Muestre sus resultados.
//multiplosDe13[8]
    for (i=1;i<=8;i++)
    {
        multiplosDe13[i]=i*13;
        printf("%d,  ", multiplosDe13[i]);

    }
printf("\n");
printf(" 5. \n  ");
//5. Codifique un programa que defina un vector de 26 elementos, en los cuales
//almacene como contenido el valor del subíndice de cada elemento; muestre en
//pantalla sus resultados.
//veinte6Elementos[26],
for (i=0;i<=25;i++)
    {
        veinte6Elementos[i]= i;
        printf("%d,  ", veinte6Elementos[i]);

    }
printf("\n");
printf(" 6. \n  ");
//6. Codifique un programa que defina un vector de 18 elementos numéricos
//enteros, llamado verde que sea inicializado con el número 3 y solo en los
//elementos con subíndice par escriba el número del subíndice.
//verde[18],

for (i=1;i<=18;i++)
    {
        verde[i]= 3;
            if (i%2==0)
            printf("subindice %d = %d  ",i , verde[i]);

    }
printf("\n");
printf(" 7. \n  ");
//7. Codifique un programa que defina un vector llamado azul, de elementos
//numéricos flotantes, inicializado con valores de 9 en los elementos par y 11 en
//los impares. Muestre el contenido y en los subíndices que sean múltiplos de 4
//los muestra en la segunda columna de pantalla
//azul[6]
for (i=1;i<=18;i++)
    {
            if (i%2==0)
            azul[i]= 9;
            if (!(i%2==0))
            azul[i]= 11;
            if (i%4==0)
            printf("\t subindice %d = %.2f  \n",i , azul[i]);
    }
printf("\n");
//8. Codifique la definición del vector, inicialización y entrada de datos
//proporcionada por el usuario, en la que se almacenen la estatura de 45
//alumnos de un salón de clases de primaria.
//estatura[45]
printf(" 8. \n  ");
//  for (i=1;i<=45;i++)
  //  {
    //        printf("\t Proporcioneme la estatura del individuo %d en centimetros\n", i);
      //      scanf("%d", &estatura[i]);
    //  }
//Se desactivo la actividad #8 porque quita mucho tiempo
printf("\n");
printf(" 9. \n  ");
//9. Codifique un programa que capture el promedio de calificaciones de un alumno
//que lleva 11 materias, y las muestre en orden inverso a como fueron tecleadas.
//calificaciones[11]
// for (i=0;i<=10;i++)
//     {
//             printf("\t Proporcioneme la calificacion de la materia %d en enteros\n", i+1);
//             scanf("%d", &calificaciones[i]);
//     }
// for (i=10;i>=0;i--)
//     {
//             printf("\t La a calificacion de la materia %d en enteros %d\n", i+1, calificaciones[i]);
//     }
printf("\n");
//10. Codifique un programa que lea 2 vectores de 10 elementos e intercambie el
//primer elemento del primer vector con el último elemento del segundo vector
//y viceversa, mostrando paso a paso cada uno de los cambios efectuados.
//viceversa[10], viceversa1[10]; viceversa2[20]

//  printf(" 10. \n  ");
//  j=0;
 //   for (i=0;i<10;i++)      //captura datos de vector1
  //      {
   //         printf("Proporsiona un elemento para el vector1\n");
   //         scanf("%d",&viceversa[i]);
   //         viceversa2[j]=viceversa[i]; // j del 0 al 9
            //printf("primer vector \n addres  dato");
            //printf("%d  %d \n",i , viceversa);
   //         j++;
            //printf("%d  %d \n",i, viceversa[i]);
    //    }
     //   printf("primer vector1 \n addres     dato\n"); //cabezera de vector1
     //   for (i=0;i<10;i++)      //impresion de tabla vector1
     //   {

    //        printf("%d      %d \n",i , viceversa[i]);
            //printf("%d  %d \n",i, viceversa[i]);
   //     }

  //  for (i=0;i<10;i++)      //captura datos de vector2
     //   {
       //     printf("Proporsiona un elemento para el vector2\n");
       //     scanf("%d",&viceversa1[i]);
      //      viceversa2[j]=viceversa1[i]; // j del 10 al 19
            //printf("%d  %d \n",i, viceversa1);
    //        j++;
            //viceversa1[i]=i;
            //printf("%d  %d \n",i, viceversa1[i]);
  //      }
//printf("primer vector2 \n addres     dato\n"); //cabezera de vector2
     //   for (i=0;i<10;i++)      //impresion de tabla vector2
     //   {

   //         printf("%d      %d \n",i , viceversa1[i]);
            //printf("%d  %d \n",i, viceversa[i]);
  //      }

//printf("impresion de tabla inversa del vector1 \n addres     dato\n"); //cabezera de vector invers
  //  for (i=0;i<10;i++)      //impresion de tabla inversa del vector2 al vector1
   //     {
   //         viceversa[i]=viceversa2[j-1]; //Compensasion de desfase
  //          printf("%d      %d \n",i , viceversa[i]);
            //viceversa2[j]=viceversa1[i];
  //          j--;
  //      }

//  printf("impresion de tabla inversa del vector2 \n addres     dato\n"); //cabezera de vector invers
//  for (i=0;i<10;i++)
      //  {
          //  viceversa1[i]=viceversa2[j-1]; //Compensasion de desfase
        //    printf("%d  %d \n",i ,viceversa1[i]);
           //viceversa2[j]=viceversa1[i];
    //        j--;
           //viceversa1[i]=i;
          //printf("%d  %d \n",i, viceversa1[i]);
//        }
printf("\n");

//11. Codifique un programa que defina un vector de 32 elementos, guardando en
//cada uno de ellos el cuadrado del valor del subíndice más 5 unidades.
//cuadrado[32];
printf(" 11. \n  ");
for (i=1;i<=32;i++)
    cuadrado[i]=((i*i)+5);
printf("\n");
//12. Un maestro de Karate de la escuela de ShitoKai desea conocer el promedio de
//peso de sus 35 alumnos de la clase de las 5 de la tarde, y lo contrata a usted
//para que elabore un programa que pueda dar solución a su problema, para lo
//cual requiere que cada alumno capture su peso en pantalla al momento de
//entrar a clase. Y al finalizar la clase el maestro revisará la pantalla, la cual
//deberá de mostrar 5 columnas en las cuales se visualizarán los pesos de los
//alumnos al final mostrar una línea con el promedio de peso de todos ellos.
// promedioPesos, m, i ,j, karatePesos[35]
printf(" 12. \n  ");
// for (i=0;i<35;i++)
//     {
//             printf("Proporsioname tu peso en kilos\n");
//             scanf("%f",&karatePesos[i]);

//     }
// m=0;
// for (i=1;i<=7;i++)
//     {   printf("\n");
//         for(j=0;j<5;j++)
//         {
//             printf("%.2f        ", karatePesos[m]);

//             m++;
//         }
//     }

// 13. Codifique un programa que solicite al usuario que teclee el valor de X y de Y. y
// que almacene en un vector de 8 elementos numéricos flotantes, en cada
// elemento el resultados de la ecuación F= 5x + 2y2 - 3m Donde M es el numero
// del subíndice del vector. Muestre resultados.
// funcion[8],m, x, y, xy;   funcion=5x+2(y*y)-3m
printf(" 13. \n  ");
printf("Proporsioname el valor de X\n");
scanf("%f",&x);
printf("Proporsioname el valor de Y\n");
scanf("%f",&y);
m=0;
for (i=0;i<8;i++)
    {
            funcion[i]=5*x+2*(y*y)-3*m;
            printf("%.2f \n", funcion[i]);
            m++;

    }

}
