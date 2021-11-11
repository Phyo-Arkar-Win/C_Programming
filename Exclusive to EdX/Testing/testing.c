#include<stdio.h>
int main (void){
    int i = 0, j= 0;
    i = j++;
    printf("%d",i);
}
#include <stddef.h>// NULL
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//returned buffer should be dynamically allocated and will be freed by a caller
char* solution(const char *camelCase) {
  int size = strlen(camelCase);
  char* arr = (char*)malloc((100+size)*sizeof(char));
  for(int i = 0;camelCase[i]!='\0';i++){
    
    if(isupper(camelCase[i])){
      char* buffer = (char*)malloc(50*sizeof(char));
      buffer[0] = ' '; 
      buffer[1] = camelCase[i];
      int next = i;
      next++;
        for(int j=2;islower(camelCase[next]) && camelCase[i]!='\0';j++){
        buffer[j] = camelCase[++i];
        i++;
        }
      }
      strcat(arr,buffer);
      free(buffer);
    }
    else{
      arr[i] = camelCase[i];
    }
  return arr;
  }

  if(int )
  else 

  #include <stddef.h>// NULL
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//returned buffer should be dynamically allocated and will be freed by a caller
char* solution(const char *camelCase) {
  int size = strlen(camelCase);
  char* array = (char*) malloc((50+size)*sizeof(char));
  for(int i = 0;camelCase[i]!='\0';i++){
    
    if(isupper(camelCase[i])){
      char* buffer = (char*) malloc (100*sizeof(char));
      buffer[0] = ' '; // for the space
      buffer[1] = camelCase[i]; // for the current upper character
      int next = i;
      next++;
      for(int j = 2; islower(camelCase[next]) && camelCase[next] != '\0';j++){
        buffer[j] = camelCase[++i];
        next = i;
        next++;
      }
      strcat(array,buffer);
      free(buffer);
    }
    else{
      array[i] = camelCase[i];
    }
  }
  return array;
}