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
    if(son<=-1){
        x = son - 2;
    }else{
        if(son==0){
            x = son + 10;
        }
    }
        if(son>=+1){
            x = son;
        }


    printf("%d",x);


    return 0;
}
