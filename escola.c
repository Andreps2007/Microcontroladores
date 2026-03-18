#include <stdio.h>
#include <math.h>
int main()
{
    int n1, n2, cubo, resultado;
    char asc;
    printf("Hello World\n");
       printf("Digite um numero: ");
scanf("%d",&n1);
   printf("Digite outro numero : ");
   scanf("%d",&n2);
   int soma= n1+n2;
   printf("a SOMA entre os numeros é %d\n", soma);
   int subtracao= n1-n2;
   printf("a subtracao entre os numeros é %d\n", subtracao);
      printf("Digite um caractere : ");
         scanf(" %c", &asc);
         
         printf("o asc eh : %d\n", asc);
                printf("Digite um numero para elevar ao cubo: ");
                scanf("%d", &cubo);
                resultado =pow(cubo,3);
                printf("o cubo desse num é %d\n", resultado);
      printf("Digite um caractere : ");
         
    return 0;
}
