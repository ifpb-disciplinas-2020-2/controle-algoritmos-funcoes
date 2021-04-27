#include <stdio.h>
int main() {
   int idade = 30;
   int numero= 15;
   int *ponteiro = &idade;
   idade = numero; // alterando ponteiro
   printf("O valor da idade: %d\n", idade); 
   printf("O valor do ponteiro: %d\n", *ponteiro); 
   printf("O endereço da idade: %p\n", &idade); // %p endereço de memória
   printf("O endereço do número: %p\n", &numero); 
   printf("O endereço do ponteiro: %p\n", ponteiro); 
   return 0;
}