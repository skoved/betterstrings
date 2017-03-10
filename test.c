#include "betterstring.h"
#include <stdio.h>

int main(int argc, char **argv){
    if(argc != 2){
        return 0;
    }
    String what;
    char * ptr = (char*) malloc(25);
    ptr = "Hello :)";
    what.data = ptr;
    printf("%s\n", what.data);
    what.data = argv[1];
    printf("%s\n", what.data);
    printf("%d\n", length(what));
    return 0;
}
