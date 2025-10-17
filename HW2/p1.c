#include <stdio.h>

/*You are given two rectangles on the 2D plane. Each of them is specified by two diagonally opposing points. Determine the area that is covered by both rectangles.
Constraints: -106 <= point x, y coordinates <= 106
Example: for the two rectangles (red and green) their common area is shown in yellow
input:
2 1
6 4
4 5
8 2
output:
4
*/

int main(){
    int Ax, Ay, Bx, By;
    int Cx, Cy, Dx, Dy;

    printf("Enter coordinates for the first rectangle (points A and B):\n");
    scanf("%d %d", &Ax, &Ay);
    scanf("%d %d", &Bx, &By);

    printf("Enter coordinates for the second rectangle (points C and D):\n");
    scanf("%d %d", &Cx, &Cy);
    scanf("%d %d", &Dx, &Dy);

    int leftA, rightA, bottomA, topA;
    int leftB, rightB, bottomB, topB;

    if(Ax < Bx){
        leftA = Ax; rightA = Bx;}
    else{
        leftA = Bx; rightA = Ax;}
    if(Ay < By){
        bottomA = Ay; topA = By;}
    else{
        bottomA = By; topA = Ay;}
    if(Cx < Dx){
        leftB = Cx; rightB = Dx;}
    else{
        leftB = Dx; rightB = Cx;}
    if(Cy < Dy){
        bottomB = Cy; topB = Dy;}
    else{
        bottomB = Dy; topB = Cy;}

    int commonX_start, commonX_end;
    int commonY_start, commonY_end;

    // Find common X range
    if(leftA > leftB) commonX_start = leftA;
    else commonX_start = leftB;

    if(rightA < rightB) commonX_end = rightA;
    else commonX_end = rightB;

    // Find common Y range
    if (bottomA > bottomB) commonY_start = bottomA;
    else commonY_start = bottomB;

    if(topA < topB) commonY_end = topA;
    else commonY_end = topB;

    int commonX = commonX_end - commonX_start;
    int commonY = commonY_end - commonY_start;

    if(commonX < 0) commonX = 0;
    if(commonY < 0) commonY = 0;

    int commonArea = commonX * commonY;

    if(commonArea > 0){
        printf("The common area is %d.\n", commonArea);}
    else{
        printf("There is no common area.\n");}

    return 0;
}
