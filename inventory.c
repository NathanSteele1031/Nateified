typedef struct {
    char name[20];
    int amount;
} Item;

void clearItem(Item* givenItem){
    for (int index=0; index<20; index++){
        givenItem->name[index] = '\0';
    }
    givenItem->amount = 0;
}

void clearInventory(Item* givenInventory, int inventoryLength){
    for (int index=0; index<inventoryLength; index++){
        clearItemName(&givenInventory[index]);
    }
}