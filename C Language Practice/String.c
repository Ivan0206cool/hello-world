#include <stdio.h>
#include <stdlib.h>

int main(){
   int i;
   char s[]="this is a string";
   for(i=0;s[i]!='\0';i++){
      printf("%c",s[i]);
   }
}