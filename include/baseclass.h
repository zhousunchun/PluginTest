//
// Created by chunchun on 18-9-27.
//

#ifndef PLUGIN_BASECLASS_H
#define PLUGIN_BASECLASS_H

#include <iostream>

class CBase
{
protected:
    CBase() { std::cout << "construction of CBase" << std::endl; }
public:
    virtual ~CBase(){ std::cout << "destroy of CBase" << std::endl; }

};

#endif //PLUGIN_BASECLASS_H
