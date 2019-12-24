#include <stdio.h>
#include <math.h>
int main()
{
   printf("Digite a quantidade de discos: ");
   int n;
   scanf("%d",&n);
   int resultado;
   
   resultado = pow(2,n)-1;
   printf("São nescessarios %d moviemntos para %d discos!",resultado,n);
   
}
