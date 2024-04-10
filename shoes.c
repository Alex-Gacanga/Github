#include <stdio.h>
#include <string.h>
#include "function.h"
int main(){
    int size = 2;
    struct shoes botique[size];
add_details(botique, size);
print_details(botique, size);
    return 0;
}