#include <iostream>
#include "./include/pluginhelper.h"
#include "./include/polygon.h"


int main(void)
{
    CPluginHelper pluginHelper;

    pluginHelper.Load( "./plugin", "*.so" );


    CPolygon * pbase = (CPolygon *)pluginHelper.Create("CTriangle");

    if( 0 != pbase )
    {
        pbase->area();
    }

    delete pbase;

    pbase = (CPolygon *)pluginHelper.Create("CRectangle");

    if( 0 != pbase )
    {
        pbase->area();
    }

    delete pbase;

    pbase = (CPolygon *)pluginHelper.Create("CPentagon");

    if( 0 != pbase )
    {
        pbase->area();
    }

    delete pbase;

    pbase = (CPolygon *)pluginHelper.Create("CHexagon");

    if( 0 != pbase )
    {
        pbase->area();
    }

    delete pbase;


    pluginHelper.UnLoad( "./plugin", "*.so" );

    return 0;
}