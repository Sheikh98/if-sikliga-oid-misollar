//agar son musbat bolsa 1 ga oshirsin
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
int main()
{
    int son, x;
    printf("son kriting");
    scanf("%d",&son);
    if(son>-1){
        x = son + 1;
    }else{
        if(son<=-1){
            x = son - 2;
        }

    }
     printf("%d", x)
    return 0;
}
