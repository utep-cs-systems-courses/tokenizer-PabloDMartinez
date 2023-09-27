#include <stdio.h>
#include "tokenizer.h"


int main(){
  int c;
  
  printf("Welcome!\n");

  printf("Use ! to exit\n");
  
  printf("Please enter prompt: \n>");

  c = getchar();
  while(c != EOF && c != '!'){
    putchar(c);
    c = getchar();
  }
}
