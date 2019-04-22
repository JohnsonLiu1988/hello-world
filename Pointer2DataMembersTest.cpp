#include "Pointer2DataMembersTest.h"
#include <stdio.h>

int main()
{
    Point3d origin;

    printf("&Point3d::x = %p\n", &Point3d::x);
    printf("&origin.x = %p\n", &origin.x);
    printf("&origin.base = %p\n", &origin);
}
