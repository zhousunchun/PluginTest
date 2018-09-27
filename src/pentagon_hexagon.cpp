#include "../include/petagon_hexagon.h"
#include "../include/dynclass.h"

DYN_DECLARE(CPentagon);
DYN_DECLARE(CHexagon);

double CPentagon::area(void) const
{
    std::cout << "area of pentagon" << std::endl;
    return 0;
}

double CHexagon::area(void) const
{
    std::cout << "area of hexagon" << std::endl;
    return 0;
}