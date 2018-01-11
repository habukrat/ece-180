//
//  main.cpp
//  ECE 180 Microchallenge 1
//
//  Created by Chaim A on 1/10/18.
//  Copyright (c) 2018 Hadar Abukrat. All rights reserved.
//

#include <iostream>

/* A trivial C program */
int doSomething(int anArg1) {
    int theInt = 10;
    
    if(theInt == anArg1) {
        char *theStr = (char *)malloc(100*sizeof(char));
        strcpy(theStr, "Wow, they matched!");
        return 10;
    }
    if(!theInt) {
        return anArg1;
    }
    return 0;
}

int main() {
    doSomething(0);
}
