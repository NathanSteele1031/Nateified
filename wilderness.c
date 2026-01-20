#include "wilderness.h"
#include <stdlib.h>
#include <time.h>

int getRandomValue(int max, int min){
    return min + rand() % (max - min + 1);
}

Item* scavange(){
    /*
    Items numbers:
    1 - Wood
    2 - Leaves
    3 - Flower
    */
   Item scavangedItems[5];
   int searchAmount = getRandomValue(1, 5);
   int randomItemSelected = getRandomValue(1, 3);
   while (searchAmount > 0){
    switch (randomItemSelected){
        case 1:
            break;
    }
    randomItemSelected = getRandomValue(1, 3);
    searchAmount--;
   }
}