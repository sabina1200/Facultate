/*
You are working as a pharmacist and you have an old balance for measuring weights.
Your boss gives you three weights and commands you to place them either on the left or the right arm of the balance. Determine if the arms are in equilibrium after you place all the weights.
Constraints: 0 <= weights <= 100, given with at most 2 decimal digits
Example:
input (follow this format, L is for left arm, R is for right arm):
L 1.5mg
R 2mg
L 0.5mg
output: balanced
*/

#include <stdio.h>

int main()
{
    float w,LS=0,RS=0;
    char side;
    printf("Enter three weights(ex. L 1.5mg/R 2mg):\n");
    for(int i=0; i<3; i++){
        scanf(" %c %fmg", &side, &w);
        if(side=='L') {
            LS+= w;
            }
        else if(side=='R'){
            RS+= w;
            }
    }
    if(LS==RS) printf("balanced");
    else printf("imbalanced");
    return 0;
}
