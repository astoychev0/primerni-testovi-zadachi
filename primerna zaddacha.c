#include <stdio.h>
#include <stdlib.h>

#define N 3

int main()
{
      printf ("1\n");  
      printf ("1\n");
      printf ("1\n");
      printf ("1\n");
   float A[N][N],C[N],temp;
   int i,j;

   for(i=0;i<N;i++)
       for(j=0;j<N;j++)
       {
           do
           {
           printf("A[%d][%d]= ",i,j);
           scanf("%f",&A[i][j]);
           if(A[i][j]<-500.0f||A[i][j]>500.0f)
           printf("Chisloto ne vliza v [-500;500] !\n");
           }
           while(A[i][j]<-500.0f||A[i][j]>500.0f);
       }
       printf("\n");

   for(i=0;i<N;i++)
   {
   C[i]=0.0f;
   for(j=0;j<N;j++)
   C[i]+=A[i][j];
   C[i]/=N;
   }

   for(i=0;i<N;i++)
       printf("C[%d]= %.3f\n",i,C[i]);
   printf("\n");

   for(i=0;i<N-1;i++)
       for(j=i+1;j<N;j++)
           if(C[i]>C[j])
           {
           temp=C[i];
           C[i]=C[j];
           C[j]=temp;
           }

   for(i=0;i<N;i++)
   printf("C[%d]= %.3f\n",i,C[i]);
   printf("\n");

   return 0;
}
