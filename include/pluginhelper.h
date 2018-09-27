//
// Created by chunchun on 18-9-27.
//

#ifndef PLUGIN_PLUGINHELPER_H
#define PLUGIN_PLUGINHELPER_H

#include <iostream>
#include <string>
#include <vector>
#include <map>

#include <dlfcn.h>

const int BUF_SIZE = 1024;

typedef  void * CreateOBJ_T(const char * strClassNmae);
typedef void DeleteOBJ_T(void * p);

class CPluginHelper
{
public:
    CPluginHelper();
    ~CPluginHelper();
public:
    void Load(const std::string & dir, const std::string & pattern);
    void UnLoad(const std::string & dir, const std::string & pattern);

    void *Create(const std::string & className);

private:

    std::vector<std::string> GetFileNameByPattern(std::string dir, const std::string & pattern);
    std::map<std::string, void *> m_SoNameTable;
    std::map<std::string, void * > m_ClassNameTable;
};

#endif //PLUGIN_PLUGINHELPER_H
