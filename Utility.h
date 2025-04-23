#ifndef UTILITY_H
#define UTILITY_H
#include <iostream>
#include <map>
#include <ostream>
class Utility{
public:
    static int RequestInput(const std::string& prompt, const std::map<int, std::string>& options);
};
#endif // UTILITY_H
