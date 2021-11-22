#include "functions.h"

int main() {
    printf("start");
    node *header=NULL;
    printf("add 1 to front\n");
    insertFront(&header,1);
    printlist(&header);
    printf("add 2 to front\n");
    insertFront(&header,2);
    printlist(&header);
    printf("add 9 to back\n");
    insertBack(&header,9);
    printlist(&header);
    insertAfter(&header,0,5);
    printf("add 5 to pos 0+1\n");
    printlist(&header);
    printf("delete front\n");
    deleteFront(&header);
    printlist(&header);
    printf("delete back\n");
    deleteBack(&header);
    printlist(&header);
    printf("delete at 1\n");
    deleteAt(&header,1);
    printlist(&header);
    deleteALL(header);
    return 0;
}
