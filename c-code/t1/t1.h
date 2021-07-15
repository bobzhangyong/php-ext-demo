//
// Created by bobyzhang on 2021/1/7.
//

#ifndef TESTC_T1_H
#define TESTC_T1_H

typedef struct myStruct myStruct;

struct myStruct {
    int changeCount;
    char *msg;
};

void addString(const char *input, char *outPut);
float myAddTowParam(int param1, int param2);
int myIsLarge(int param1, int param2);
void changeMsgInMyStruct(myStruct *struct1, char *input);
myStruct * createMyStruct();

#endif //TESTC_T1_H
