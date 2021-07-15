//
// Created by bobyzhang on 2021/1/7.
//

#include <string.h>
#include <stdlib.h>
#include "t1.h"

void addString(const char *input, char *outPut)
{
    strcat(outPut, "run add string ret: ");
    strcat(outPut, input);
}

float myAddTowParam(int param1, int param2)
{
    return (float) (param1 + param2) / (float) param1;
}

int myIsLarge(int param1, int param2)
{
    if (param1 > param2) {
        return 1;
    } else {
        return 0;
    }
}

void changeMsgInMyStruct(myStruct *struct1, char *input)
{
    struct1->changeCount++;
    strcat(struct1->msg, input);
}

myStruct * createMyStruct()
{
    myStruct* s = malloc(sizeof(myStruct));
    s->msg = (char*)malloc(sizeof(char));
    s->changeCount = 0;
    strcpy(s->msg, "");

    return s;
}
