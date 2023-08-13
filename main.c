#include <stdio.h>
#include <stdlib.h>

void calculo();

int op, matriz[2][2];
double salario, novo_salario,
aumento= 1.5,
aumento2= 1.1, 
aumento3= 1.05;

int main(void) {

  calculo();
    
  return 0;
}

void calculo(){ //Sistemas de Caluculos e Condições para os Problemas:
do{
  system("cls");
  printf("Digite o salário atual: ");
      scanf("%lf", &salario);
        printf("\n");

    //Problema A. Caso o salário seja menor que 1000 aumenta 15%.
    if (salario<=1000)
    {
      novo_salario= salario * aumento;

      printf("O aumento salarial é: R$%2.lf", novo_salario);
    }
    
    else

      //Problema B. Caso o salário seja estiver entre 1000 e 2000 aumenta 10%.
      if ((salario>1000&&salario<2000))
      {    
        novo_salario= salario * aumento2;

        printf("O aumento salarial é: R$%2.lf", novo_salario);
      }

    else 
      
    // Problema C. Caso o salário seja maior que 2000 aumento 5%...
    if (salario>=2000)
    {
      novo_salario= salario * aumento3;

      printf("O aumento salarial é: R$%2.lf", novo_salario);

    }
      printf ("\n\n(1) Continuar  /  (2) Sair");
      scanf("%d", &op);
      printf ("\n\nPrograma Encerrado");
  }while (op==1);
}