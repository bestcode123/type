#include <stdio.h>
/*
TODO:
    -> Build TYPE code
    -> Create a working release
*/
int main() {
    printf("Welcome to the TYPE engine, this project is maintained by bestcode123 on GitHub\n");
    FILE* fp = fopen("data/test/test.type", "r"); // Load file
    char oneline[150]; // Here is where all of the application data is loaded by the engine
    
    while(!feof(fp)) { // This is where most of the TYPE code is stored
        fgets(oneline, 150, fp);
        printf("%s", oneline);
    }

    return 0;
}