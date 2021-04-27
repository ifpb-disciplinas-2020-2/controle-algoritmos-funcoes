#include <stdio.h>
int terceiro=10; // variável global
void imprimir(){
   printf("Valor do número: %d\n", terceiro);
}
int main() {
    // variável local definida na função main
    int numero = 15;
    printf("Global: %d, Local: %d: \n", terceiro, numero);
    imprimir();
return 0; }