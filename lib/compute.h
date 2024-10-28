#ifndef COMPUTE
#define COMPUTE

//struct for pile system
typedef struct OutputChar{
    char value;
    OutputChar *next;
} OutputChar;

//main xor function prototype
char* xor(char *txt, int txt_lenght, char *key, int key_lenght);

#endif