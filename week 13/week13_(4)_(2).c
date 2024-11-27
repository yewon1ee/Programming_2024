#include <stdio.h>
#include <stdlib.h>

struct point {
    int x;
    int y;
};

int getArea(struct point *pPtr1, struct point *pPtr2) {
    int width = (*pPtr2).x - (*pPtr1).x;
    int height = (*pPtr2).y - (*pPtr1).y;

    if (width < 0) width = -width;
    if (height < 0) height = -height;

    return width * height;
}

int main(int argc, char *argv[]) {
    int area = 0;
    struct point p1, p2;
    struct point *pPtr1, *pPtr2;
    pPtr1 = &p1;
    pPtr2 = &p2;
    printf("Input the coordinate p1 (x y) : ");
    scanf("%d %d", &p1.x, &p1.y);
    printf("Input the coordinate p2 (x y) : ");
    scanf("%d %d", &p2.x, &p2.y);

    area = getArea(pPtr1, pPtr2);

    printf("Area : %d", area);

    return 0;
}
