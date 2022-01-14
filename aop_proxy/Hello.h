#ifndef HELLO_H_
#define HELLO_H_

#include "IHello.h"

class Hello : public IHello {
public:
    void output(const std::string& str) override {
        std::cout << str << std::endl;
    }
};

#endif // HELLO_H_