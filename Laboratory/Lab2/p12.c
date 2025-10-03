/*12.Convert a character string into another data type by using sscanf.
*/

#include <stdio.h>

int main(){
    char number[] = "24 hours";
    int num;
    sscanf(number, "%d", &num);
    printf("%d\n", num);
    return 0;
}
