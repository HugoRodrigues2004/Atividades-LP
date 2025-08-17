/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    float premioTotal = 780000.00;
    float PrimeiroGanhador, SegundoGanhador, TerceiroGanhador;
    
    PrimeiroGanhador = premioTotal * 0.46;
    SegundoGanhador = premioTotal * 0.32;
    TerceiroGanhador = premioTotal - PrimeiroGanhador - SegundoGanhador;
    
    printf("Valor ganho pelo primeiro ganhador: R$ %.2f\n", PrimeiroGanhador);
    printf("Valor ganho pelo segundo ganahdor: R$ %.2f\n", SegundoGanhador);
    printf("Valor ganho pelo terceiro ganhador: R$ %.2f\n", TerceiroGanhador);
}
