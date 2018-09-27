//
// Created by chunchun on 18-9-27.
//

#ifndef PLUGIN_DERIVEDCLASS_H
#define PLUGIN_DERIVEDCLASS_H

#include <iostream>
#include "baseclass.h"

class CDerived1 : public CBase
{
public:
    CDerived1 () {std::cout <<"constructor of CDErived1" << std::endl; }
    virtual ~CDerived1() { std::cout << "destroy of CDerived1" << std::endl; }
    virtual void print(void);
};

class CDerived2 : public  CBase
{
public:
    CDerived2() { std::cout << "constructor of CDerived2 " << std::endl; }
    virtual ~CDerived2() {std::cout << "destory of CDerived2" << std::endl; }
    virtual void print(void);
};

#endif //PLUGIN_DERIVEDCLASS_H
