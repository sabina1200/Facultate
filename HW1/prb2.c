// John just bought land in the shape of a rectangle with height H and width W. The width of the land is known to be larger than the height.
//He wants to build a house on this land in the shape of a square and to erect a fence along the perimeter.
//Help John calculate the area of the largest square that can fit inside the rectangle and the perimeter of the land.
//Constraints: 0 < H <= W < 106

#include <stdio.h>

int main()
{
    int group,index;
    char name[101];
    printf("Enter the student's name:");
//Skips any stray spaces or newlines, then reads all the characters up to (but not including) the Enter key.
    scanf(" %[^\n]", name);
    printf("Enter the group number:");
    scanf("%d", &group);
    printf("Enter the problem index:");
    scanf("%d", &index);
    printf("The absolute path of the file is: d:\\3041%d\\%s\\main%03d.c\n", group, name, index);
    return 0;
}
