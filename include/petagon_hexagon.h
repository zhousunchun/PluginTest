/* pentagon_hexagon.h */

#ifndef __PENTAGON_HEXAGON_H__
#define __PENTAGON_HEXAGON_H__

#include "polygon.h"
#include <iostream>

class CPentagon : public CPolygon
{
public:

    virtual double area(void) const;

};

class CHexagon : public CPolygon
{
public:

    virtual double area(void) const;

};

#endif /* __PENTAGON_HEXAGON_H__ */