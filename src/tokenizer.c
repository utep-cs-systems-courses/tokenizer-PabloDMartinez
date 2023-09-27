#include <stdio.h>
#include <tokenizer.h>


int space_char(char c){
  if(c == '\t' || c == ' '){
    return true
      }
  else
    return false
}

int non_space_char(char c){
  if(c != '\t' || c != ' '){
    return true
      }
  else{
    return false
      }
}
char *token_start(char *str){
  while(space_char(c) == true){
    ++(*str);
  }
  return *str;
}

char *token_terminator(char *token){
  while(non_space_char == true){
    ++(*token);
  }
  return *token;
}

int count_tokens(char *str){
  int count = 0;
  while(token_start(str) != EOF){
    count++;
    str = token_terminator(*token);
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
