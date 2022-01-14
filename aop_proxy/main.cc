#include "Hello.h"
#include "HelloProxy.h"
#include <memory>

int main(int argc, char** argv) {

    std::shared_ptr<IHello> hello = std::make_shared<HelloProxy>(new Hello);
    hello->output("world");
    
    return 0;
}