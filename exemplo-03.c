#include <stdio.h>
void lerEImprimir(){
   int terceiro; // variável local definida na função main
   printf("Digite um número: ");
   scanf("%d", &terceiro);
   printf("Valor do número: %d\n", terceiro);
}
int main() {
   int numero = 10; // variável local definida na função main
   if(numero %2 == 0){
       int segundo; // variável local definida no bloco if
       printf("Digite um número: ");
       scanf("%d", &segundo);
   }
   lerEImprimir();
   return 0;
}