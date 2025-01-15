#include <stdio.h>
#include <stdlib.h>

int randchar(){
    int lower = 65;
    int upper = 90;
    int value = rand() % (upper - lower + 1) + lower;
    //65 - 90 is ascii for uppercase alphabet

    return value;


}