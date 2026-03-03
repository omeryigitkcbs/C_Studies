#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;

    for(int i=1; i<= 100; i++){
        if(i==13) {
            break;
        }
        printf("%d\n", i);
    }

    return 0;
}
