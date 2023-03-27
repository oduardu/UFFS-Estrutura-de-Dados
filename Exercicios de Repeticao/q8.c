#include <stdio.h>

void main(){
    float altAntonio = 1.5, altCarlos = 1.1;
    int count = 0;

    while (altAntonio >= altCarlos){
        altAntonio += 0.02;
        altCarlos += 0.03;
        count += 1;
    }

    printf("Foram necessarios %d anos para que Carlos chegasse a altura de Antonio\n", count);
}