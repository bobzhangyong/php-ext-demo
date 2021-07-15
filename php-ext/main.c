#include <stdio.h>
#include <stdlib.h>
#include "t1.h"
int main()
{
    printf("Hello, World!\n");

    char out[100];
    addString("test from main", out);
    printf("%s \n", out);

    printf("%f \n", myAddTowParam(10, 5));

    if (myIsLarge(10, 5)) {
        printf("is large\n");
    } else {
        printf("not large\n");
    }

    myStruct *s = createMyStruct();

    changeMsgInMyStruct(s, "add to struct ");
    changeMsgInMyStruct(s, "msg in struct2");

    printf("s info %d, %s \n", s->changeCount,  s->msg);

    free(s);

    return 0;
}