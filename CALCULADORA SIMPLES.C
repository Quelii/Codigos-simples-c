#include <stdio.h>

int main()
{
 int op, a,b;
 

 printf("Digite Valor 1:");
 scanf("%d:",&a);
 printf("Digite Valor 2:");
 scanf("%d:",&b);
 
 do{
     
 printf("\n Escolha a Operacao: \n");
 printf("Digite 1 - Para Soma: \n");
 printf("Digite 2 - Para Subitração: \n");
 printf("Digite 3 - Para mutiplicação: \n");
 printf("Digite 4 - Para Divisão: \n");
 printf("Digite 0 - Para sair \n");
 
 scanf("%d \n",&op);
 
 switch(op){
     
     case 0:
     break;
     
     case 1:
     
     printf("%d",a + b);
     break;
     
     case 2:
     
     printf("%d",a - b);
     break;
     
     case 3:
     
     printf("%d",a * b);
     break;
     
     case 4:
     
     printf("%d",a / b);
     break;
     
     
     
 } 
 }while (op!=0);
 
    return 0;
}
