#include<stdio.h>
void main()
{

    int i, j, k, l, blanco[3][3];

    for (i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    {
            l=blanco[i][j];
            printf("[%d][%d]=%d \t",i ,j ,l);
    }
    printf("\n");
    }
    for (i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    {
            printf("\nproporciona el valor a asignar al vector blanco\n");
            scanf("%d",&blanco[i][j]);
            //blanco[i][j]=l;
            // printf("[%d][%d]=%d \t",i ,j ,l);
    }
    printf("\n");
    }
     for (i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    {
            // printf("\nproporciona el valor a asignar al vector blanco\n");
            // scanf("%d",&l);
            //blanco[i][j];
             printf("[%d][%d]=%d \t",i ,j ,blanco[i][j]);
    }
    printf("\n");
    }
}