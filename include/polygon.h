//
// Created by chunchun on 18-9-27.
//

#ifndef PLUGIN_POLYGON_H
#define PLUGIN_POLYGON_H

class CPolygon
{
public:
    CPolygon(){}
    virtual ~CPolygon(){}
    virtual double area(void) const  = 0;
};
#endif //PLUGIN_POLYGON_H
