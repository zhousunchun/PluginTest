/* rectangle.h */

#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

#include "polygon.h"
#include <iostream>

class CRectangle : public CPolygon
{
public:

    virtual double area(void) const;

};

#endif /* __RECTANGLE_H__ */