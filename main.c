#include <stdio.h>
#include "inventory.h"
#include "wilderness.h"

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
    srand(time(NULL));
    Item inventory[10];
    clearInventory(inventory, 10);
    char tempInput = '0';
    int menuSelection = 0;
    int mainMenuOptions = 2;

    while (1){
        switch (menuSelection){
            case 0:
                inventoryMenu(&inventory[0], 10);
                break;
            case 1:
                wildernessMenu();
                break;
        }
        printf("\nPress q to exit and 0 to switch menus\n");
        scanf("%c", &tempInput);
        if (tempInput == 'q'){
            break;
        }

        if (tempInput == '0'){
            menuSelection = (menuSelection + 1) % mainMenuOptions;
        }

        if (tempInput != '\n'){
            scanf("%c", &tempInput);
        }
        tempInput = '0';
    }

    return 0;
}