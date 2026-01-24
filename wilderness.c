#include "wilderness.h"

int getRandomValue(int min, int max){
    return min + rand() % (max - min + 1);
}

Item* scavange(){
    /*
    Items numbers:
    1 - Wood
    2 - Leaves
    3 - Flower
    */
   Item* scavangedItems = malloc(sizeof(Item) * 6);
   for (int index=0;index<6;index++){
    clearItem(&scavangedItems[index]);
   }
   int searchAmount = getRandomValue(1, 5);

   setItemName(&scavangedItems[0], "INFO", 4); // Info of the amount of items in returned arrary
   scavangedItems[0].amount = searchAmount;

   int randomItemSelected = getRandomValue(1, 3);
   while (searchAmount > 0){
    switch (randomItemSelected){
        case 1:
            setItemName(&scavangedItems[searchAmount], "Wood", 4);
            scavangedItems[searchAmount].amount = getRandomValue(1, 10);
            break;
        case 2:
            setItemName(&scavangedItems[searchAmount], "Leaves", 6);
            scavangedItems[searchAmount].amount = getRandomValue(1, 20);
            break;
        case 3:
            setItemName(&scavangedItems[searchAmount], "Flower", 6);
            scavangedItems[searchAmount].amount = getRandomValue(1, 5);
            break;
    }
    randomItemSelected = getRandomValue(1, 3);
    searchAmount--;
   }
   return scavangedItems;
}