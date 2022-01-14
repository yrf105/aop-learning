#ifndef HELLOPROXY_H_
#define HELLOPROXY_H_

#include "IHello.h"

class HelloProxy : public IHello {
public:
    HelloProxy(IHello* hello) : IHello(), IHello_(hello) {}
    ~HelloProxy() {
        delete IHello_;
        IHello_ = nullptr;
    }
    void output(const std::string& str) override {
        std::cout << "action before ";
        IHello_->output(str);
        std::cout << "action after\n";
    }

private:
    IHello* IHello_;
};

#endif // HELLOPROXY_H_