#include "main.h"
int main() {
    
   unsigned long int compare = 1, n, result = 0, i = 1;
    printf("Please insert number ?\n");
    scanf("%ld", &n);
  //   result = (n|1);
     print_binary(result);
    
 /**   while (result == 0)
    {
        result = (n & 1);
        compare<<1;
    }*/
    printf("%ld", compare);
    return 0;
}
