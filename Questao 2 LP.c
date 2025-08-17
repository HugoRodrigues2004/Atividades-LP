/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    float valor, totalPagar, parcela, comissaoDesconto, comissaoTotal;
    printf("Digite o valor da venda: ");
    scanf("%f", &valor);
    
    totalPagar = valor - (valor * 0.1);
    parcela = totalPagar / 3;
    comissaoDesconto = totalPagar * 0.05;
    comissaoTotal = valor * 0.05;
    
    printf("\nTotal a pagar com desconto de 10%%: R$ %.2f", totalPagar);
    printf("\nValor de cada parcela (3x sem juros): R$ %.2f", parcela);
    printf("\nComissão do vendedor (sobre o valor com desconto): R$ %.2f", comissaoDesconto);
    printf("\nComissão do vendedor (sobre o valor total): R$ %.2f", comissaoTotal);
}
