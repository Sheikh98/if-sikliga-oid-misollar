#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
int main()
{
   int son1, son2, son3, counter=0;
   
   printf("son kriting_");
   scanf("%d", &son1);
   
   printf("son kriting_");
   scanf("%d", &son2);
   
   printf("son kriting_");
   scanf("%d", &son3);
    
   
   if(son1>=0){
       counter++;
    }
    if(son2>=0){
       counter++;
    }
   if(son3>=0){
       counter++;
    }
   
   printf("%d", counter);

    return 0;
}
