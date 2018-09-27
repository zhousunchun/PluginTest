//
// Created by chunchun on 18-9-27.
//

#include "../include/derivedclass.h"
#include "../include/dynclass.h"

DYN_DECLARE(CDerived1);
DYN_DECLARE(CDerived2);

void CDerived1::print(void)
{
    std::cout << " i'm class CDerived1" << std::endl;
}

void CDerived2::print(void)
{
    std::cout << " i'm class CDerived2" << std::endl;
}