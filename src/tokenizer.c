#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"


int space_char(char c){
  if(c == '\t' || c == ' '){
    return 1;
      }
  else
    return 0;
}

int non_space_char(char c){
  if(c != '\t' || c != ' '){
    return 1;
      }
  else{
    return 0;
      }
}
char *token_start(char *str){
  while(space_char(*str) == 1){
    ++(*str);
  }
  return str;
}

char *token_terminator(char *token){
  while(non_space_char(*token) == 1){
    ++(*token);
  }
  return token;
}


//Rewrite this function
int count_tokens(char *str){
  int count = 0;
  while(token_start(str) != '\0'){
    count++;
    str = token_terminator(str);
  }
  return count;
}

char *copy_str(char *inStr, short len){
  char *copy = malloc(len * sizeof(char));
  for(int i = 0; i < len; i++){
    copy[i] = inStr[i];
  }
  return copy;
}
