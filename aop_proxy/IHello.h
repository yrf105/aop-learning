#ifndef IHELLO_H_
#define IHELLO_H_

#include <string>
#include <iostream>

class IHello {
public:
    IHello() {}
    virtual ~IHello() {}
    virtual void output(const std::string& str) = 0;
};

#endif // IHELLO_H_