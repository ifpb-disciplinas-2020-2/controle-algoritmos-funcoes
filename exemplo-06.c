#include <stdio.h>
// procedimento
void trocar(int *primeiro, int *segundo){ //ponteiro
   int aux = *primeiro;
   *primeiro = *segundo;
   *segundo = aux;
}
int main(){
   int a=7, b=9;
   printf("> a:%d, b:%d\n", a, b);
   trocar(&a, &b); //ponteiro
   printf("> a:%d, b:%d \n", a, b); //a = 5 ou 7?
   return 0;
}