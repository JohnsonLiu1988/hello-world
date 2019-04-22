#ifndef POINTER_2_DATA_MEMBERS_TEST_H
#define POINTER_2_DATA_MEMBERS_TEST_H

class Point3d
{
public:
  virtual ~Point3d(){}

public:
    static Point3d origin;
    float x, y, z;
};

#endif // POINTER_2_DATA_MEMBERS_TEST_H
