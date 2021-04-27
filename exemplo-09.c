//Especificando sua dimensão;
#include <stdio.h>
void imprimirVetor(int *vetor, int tamanho){
   for(int i=0;i<tamanho;i++){
      printf("%d ", vetor[i]); // *(vetor [0]+i)
   }
   printf("\n");
}
int main() {
   int vetor[10] ={1,2, 3, 4, 5, 6, 7, 8, 9, 10}; // 0x1000 + 0*4, 1*4
   imprimirVetor(vetor, 10); //chamada da funcão
   return 0;
}