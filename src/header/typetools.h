#ifndef typetools
#define typetools

//#include <stdio.h>
void printhw() {
    puts("Hello, world!\n");
}

#include <string.h>
void scanfile(char oneline[], int maxline) {
    for(int i=0; i<strlen(oneline); i++) {
        printf("%c\n", oneline[i]);
    }
}
#endif