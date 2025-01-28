#ifndef GREETING_H
#define GREETING_H

#include <string>

class Greeting {
public:
    std::string getGreeting();
private:
    std::string getCurrentDate();
};

#endif
