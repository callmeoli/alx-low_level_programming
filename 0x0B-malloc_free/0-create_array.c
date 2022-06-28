#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/*
* create_array - creat array with specific size and and intial
* @size: size of array
* @c: intial character
* Return - null if fail ptr if success
*/
 
char *create_array(unsigned int size, char c) {
    char *ptr;
    ptr = malloc(sizeof(char) * size);
    if (size == 0){
        return (NULL);
    }else if (ptr == NULL){
    
        return (NULL);
    }else{
        unsigned int i;
        for (i = 0; i < size; i++){
        ptr[i] = c; 
        }
     return (ptr);   
    } 
}
