#include <stdio.h>
#include <stdlib.h>

int main(){

   FILE * flow = fopen("archivo.txt", "rb");

  if(flow == NULL){
   perror("No se pudo acceder al archivo");
   return 1;
 }

  fseek(flow, 0, SEEK_END);
  rewind(flow);

  int donde = ftell(flow);
  char letter;

  if (donde =! 0){

   printf("%c", letter);
   fseek(flow, -2, SEEK_END);

  }else{
   }

  char letra;

  while(feof(flow) == 0){

   letra = fgetc(flow);
   printf("%c", letra);

  }

  fclose(flow);
  printf("LECTURA EXITOSA");


return 0;
}
