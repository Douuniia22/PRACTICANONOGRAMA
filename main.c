#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fit;
    fit = fopen ( "input.txt", "r");
    int i, j, x,y, taula[10][10], taula1[10][10], comptador;
    int max_f, max_c, max_errors;
    if (fit== NULL)
    {
        printf("Error\n");
    }
    else
    {
        fscanf(fit,  "%d", &max_f);
        fscanf(fit,  "%d", &max_c);
        fscanf(fit,  "%d", &max_errors);

               for (i=0; i< max_f; i++)
               {
                   for (j=0; j< max_c; j++)
                   {
                       fscanf(fit, "%d", &taula[i][j]);
                       printf("%d ", taula[i][j]);
                   }
                   printf("\n");
               }

            comptador=0;
            x=0;  y=0;
            for (i=0; i<max_f+1; i++)
            {
               for (j=0; j< max_c+1; j++)
                {
                    if(taula[i][j]==1)
                    {
                        comptador++;
                    }
                    else
                    {
                        if (comptador!=0)
                        {
                            taula1[x][y]= comptador;
                            y++;
                            printf ("%d", comptador);
                            comptador=0;

                        }
                    }
                }
                printf("\n");
                x++;
            }
             comptador=0;
             x=0;  y=0;
             for (j=0; j< max_c+1; j++)
            {
                for (i=0; i<max_f+1; i++)
                {
                    if(taula[i][j]==1)
                    {
                        comptador++;
                    }
                    else
                    {
                        if (comptador!=0)
                        {
                            taula1[x][y]= comptador;
                            x++;
                            printf ("%d", comptador);
                            comptador=0;

                        }
                    }
                }
                printf("\n");
                y++;
            }
    }



    return 0;
}
