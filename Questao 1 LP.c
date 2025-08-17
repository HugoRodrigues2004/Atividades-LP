/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float salario;
    printf("Digite salario do funcionario: ");
    scanf("%f", &salario);
    salario += salario * 0.25;
    printf("Valor do salário com aumento = %.2f ", salario);
    return 0;
}
