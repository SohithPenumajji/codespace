#include <stdio.h>
#include <stdlib.h>

struct item {
    char *itemName;
    int quantity;
    float price;
    float amount;
};

void ReadItem(struct item *i);
void PrintItem(struct item *i);

int main() {
    struct item itm; // Allocate memory for the struct
    struct item *pitem;

    pitem = &itm;

    // Initialization
    pitem->itemName = (char *)malloc(30 * sizeof(char)); // This will allocate memory for itemName

    if (!pitem->itemName) { // Check if memory allocation was successful
        exit(-1);
    }

    // Read item
    ReadItem(pitem);

    // Print item
    PrintItem(pitem);

    free(pitem->itemName);

    return 0;
}

void ReadItem(struct item *i) {
    printf("\nEnter Product Name: ");
    scanf("%29s", i->itemName); // Use a field width to avoid buffer overflow

    printf("\nEnter Price:");
    scanf("%f", &i->price);

    printf("\nEnter Quantity: ");
    scanf("%d", &i->quantity);

    i->amount = (float)i->quantity * i->price;
}

void PrintItem(struct item *i) {
    // Print item details
    printf("\nName: %s", i->itemName);
    printf("\nPrice: %f", i->price);
    printf("\nQuantity: %d", i->quantity);
    printf("\nAmount: %f", i->amount);
}
