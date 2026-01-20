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

void wildernessMenu() {
    printf("WILDERNESS\n");
}

int main() {
    Item inventory[10];
    clearInventory(inventory, 10);
    char tempInput = '0';

    while (1){
        inventoryMenu(&inventory[0], 10);
        scanf("%c", &tempInput);
        if (tempInput == 'q'){
            break;
        }
        if (tempInput != '\n'){
            scanf("%c", &tempInput);
        }
        tempInput = '0';
    }

    return 0;
}