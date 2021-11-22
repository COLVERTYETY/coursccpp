#include "../include/headers.h"

int main(int, char**) {
    node **header;
    insertFront(header,1);
    printlist(header);
    insertFront(header,2);
    printlist(header);
    deleteall(*header);
}
