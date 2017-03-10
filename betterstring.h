#include <stdlib.h>

struct String{
    char * data;
    int (*length)();
    int (*concat)(String other);
}

//creates an empty String
String *intit_string(int n){
    String * str = (String *) malloc(sizeof(String));
    str->data = (char*) malloc(sizeof(char)*n);
    str->data = "\0";//incase you try to use it before add a string
    str->length = 0;

    return 0;
}

//get the length of the string
int length(String *self){
    return strlen(self->length);
}
