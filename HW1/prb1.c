//Computer Science students save their files on the local workstations according to the following guidelines:
//they use partition d, where they create a folder with the complete group name, inside this folder they create a subfolder with their complete name, then the file is saved as mainxxx.c,
//where xxx stands for the index of the problem, completed to three digits, adding leading zeroes when required.
//Given the group number, student name and problem index, print the location and the file name (absolute path) of the file.
//Constraints: 0 < group number <= 10, length name < 100, 0 <= problem index < 1000
//Example: group number = 2, name = John Carter, problem index = 17
//file name printed: d:\30412\John Carter\main017.c

#include <stdio.h>

int main()
{
    int H,W;
    printf("Enter the height of the rectangle:");
    scanf("%d", &H);
    printf("Enter the width of the rectangle:");
    scanf("%d", &W);
//The largest square that can fit inside the rectangle is square of height, and we know that the height is smaller than the width;
    printf("The area of the largest square that can fit inside the rectangle is %d.\n", H*H);
//The perimeter of the land is double the sum of height and width.
    printf("The perimeter of the land is %d.", 2*(H+W));
    return 0;
}
