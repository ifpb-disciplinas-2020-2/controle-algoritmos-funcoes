//Especificando sua dimensão;
#include <stdio.h>
void imprimirVetor(int vetor[10], int tamanho){
   for(int i=0;i<tamanho;i++){
      printf("%d ", vetor[i]);
   }
   printf("\n");
}
int main() {
   int vetor[10] ={1,2, 3, 4, 5, 6, 7, 8, 9, 10};
   imprimirVetor(vetor, 10); //chamada da funcão
   return 0;
}