#include "inventory.h"

void clearItem(Item* givenItem){
    for (int index=0; index<20; index++){
        givenItem->name[index] = '\0';
    }
    givenItem->amount = 0;
}

void clearInventory(Item* givenInventory, int inventoryLength){
    for (int index=0; index<inventoryLength; index++){
        clearItem(&givenInventory[index]);
    }
}

int itemEmpty(Item givenItem){
    if (givenItem.name[0] == '\0'){
        return 1;
    }
    return 0;
}

int addItem(Item* givenInventory, int inventoryLength, Item givenItem){
    for (int index=0;index<inventoryLength;index++){
        if (itemEmpty(givenInventory[index])){
            givenInventory[index] = givenItem;
            return 0;
        }
    }
    return 1; // Inventory Full
}