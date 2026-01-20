#include <stdio.h>
#include "inventory.h"

void inventoryMenu(Item* givenInventory, int inventoryLength){
    printf("INVENTORY\n");
    for (int index=0;index<inventoryLength;index++){
        if (!itemEmpty(givenInventory[index])){
            printf("%s: %d\n", givenInventory[index].name, givenInventory[index].amount);
        }
    }
}

int main() {
    Item inventory[10];
    clearInventory(inventory, 10);

    return 0;
}