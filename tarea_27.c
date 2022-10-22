#include<stdio.h>
void main()
{
int alfa[6],  lap[200], multiplosDe13[8], veinte6Elementos[26], verde[18], viceversa[10], viceversa1[10];
int karatePesos, promedioPesos, acum, x, y, xy, m, i, j, funcion, estatura[45], calificaciones[11], cuadrado[32];
float beta[6], azul[6]; //lavariable azul no especifica cuantos elementos se agregaran
char caracter;

//1. La declaración de un vector llamado “alfa” de 6 elementos numéricos enteros,
//que tendrán los valores de 5, 3, 8, 43, 91, 6.
printf(" 1. \n  ");
for (i=0;i<=5;i++)
{
    switch(i)  // 5 3 8 43 91 6
    {
        case 0:
        alfa[i]=5;
        break;
        case 1:
        alfa[i]=3;
        break;
        case 2:
        alfa[i]=8;
        break;
        case 3:
        alfa[i]=43;
        break;
        case 4:
        alfa[i]=91;
        break;
        case 5:
        alfa[i]=6;
        break;
    }
    printf("%d,  ", alfa[i]);

}
printf("\n");
printf(" 2. \n  ");
//2. La declaración de un vector llamado “beta” que almacene los siguientes
//valores: 34 45.6 56.2 67 12.8 94
for (i=0;i<=5;i++)
{
    switch(i)  // 34 45.6 56.2 67 12.8 94
    {
        case 0:
        beta[i]=34;
        break;
        case 1:
        beta[i]=45.6;
        break;
        case 2:
        beta[i]=56.2;
        break;
        case 3:
        beta[i]=67;
        break;
        case 4:
        beta[i]=12.8;
        break;
        case 5:
        beta[i]=94;
        break;
    }
    printf("%.2f,  ", beta[i]);

}
//3. La inicialización con valores de cero para un vector llamado “lap” que contiene
//200 elementos numéricos reales.
//lap[200],
printf(" 3. \n  ");
printf("\n");
printf(" 4. \n  ");
//4. Codifique un programa que defina un vector de 8 elementos y los llene con
//números enteros múltiplos de 13. Muestre sus resultados.
//multiplosDe13[8]
    for (i=1;i<=8;i++)
    {
        multiplosDe13[i]=i*13;
        printf("%d,  ", multiplosDe13[i]);

    }
printf("\n");
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

}


