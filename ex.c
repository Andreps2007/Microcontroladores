#include <stdio.h>
#include <math.h>
int main()
{
    //a
    int n1, n2;
    
    printf("Hello World\n");
       printf("Digite um numero: ");
scanf("%d",&n1);
   printf("Digite outro numero : ");
      scanf("%d",&n2);
   int subtracao= n1-n2;
   printf("a subtracao entre os numeros é %d\n", subtracao);
    //b
    
 int n3,n4;
       printf("Digite um numero: ");
scanf("%d",&n3);
   printf("Digite outro numero : ");
   scanf("%d",&n4);
   int soma= n3+n4;
   int media = (n3+n4)/2;
   printf("a SOMA entre os numeros é %d\n", soma);
      printf("a media entre os numeros é %d\n", media);
   
   //c
   char asc;
      printf("Digite um caractere : ");
         scanf(" %c", &asc);
         printf("o asc eh : %d\n", asc);
         //d
         int cubo, resultado;
                printf("Digite um numero para elevar ao cubo: ");
                scanf("%d", &cubo);
                resultado =pow(cubo,3);
                printf("o cubo desse num é %d\n", resultado);
  //e
  int noh;
         printf("digite um numero para mostrar o decimal, octal e hexadecimal :  ");
         scanf("%d",&noh);
         printf("em octal %o\n", noh);
           printf("em hexadecimal %x\n", noh);
           //f
         
    return 0;
}
