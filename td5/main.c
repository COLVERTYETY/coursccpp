#include "functions.h"

int main() {
    node *header=NULL;
    insertFront(&header,5);
    insertFront(&header,5);
    insertFront(&header,1);
    insertFront(&header,5);
    insertFront(&header,2);
    insertFront(&header,3);
    insertFront(&header,5);
    insertFront(&header,5);
    insertFront(&header,4);
    insertFront(&header,5);
    insertFront(&header,5);
    insertFront(&header,6);
    insertFront(&header,7);
    insertFront(&header,5);
    insertFront(&header,5);
    insertFront(&header,8);
    insertFront(&header,5);
    insertFront(&header,5);
    insertFront(&header,5);
    printlist(&header);
    //deleteVal(&header,5);
    deleteFirstVal(&header, 5);
    printlist(&header);
    deleteALL(header);
    return 0;
}
