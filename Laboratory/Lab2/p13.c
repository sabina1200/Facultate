/*13.Display the results of several arithmetic operations in tabular form with equal spacing. For example:
x	|y	|x+y	|x*y	|
5	|6	|11	|30	|
*/

#include <stdio.h>

int main(){
    int x,y,s,p;
    printf("Insert your x:");
    scanf("%d", &x);
    printf("Insert your y:");
    scanf("%d", &y);
    s=x+y;
    p=x*y;
    printf("x	|y	|x+y	|x*y	|\n%d	|%d	|%d	|%d	|", x,y,s,p);
    return 0;
}
