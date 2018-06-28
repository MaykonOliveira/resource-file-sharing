#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
   int cont = 0;  
   while(cont < 10){
   	  sleep(1);
   	  printf("%d\n", cont);
      cont++;
   }
   return 0;
}