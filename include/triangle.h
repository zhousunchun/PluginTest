/* triangle.h */

#ifndef __TRIANGLE_H__
#define __TRIANGLE_H__

#include "polygon.h"
#include <iostream>

class CTriangle : public CPolygon
{
public:

    virtual double area(void) const;

};

#endif /* __TRIANGLE_H__ */
