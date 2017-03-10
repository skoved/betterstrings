#include "betterstring.h"
#include <stdio.h>

int main(int argc, char **argv){
    struct BetterString what;
    char * ptr = (char*) malloc(25);
    ptr = "Hello :)";
    what.data = ptr;
    printf("%s\n", what.data);
    return 0;
}
