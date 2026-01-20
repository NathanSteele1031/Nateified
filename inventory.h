#ifndef INVENTORY_H
#define INVENTORY_H

typedef struct {
    char name[20];
    int amount;
} Item;

void clearItem(Item* givenItem);
void clearInventory(Item* givenInventory, int inventoryLength);
int itemEmpty(Item GivenITem);
int addItem(Item* givenInventory, Item givenItem);

#endif