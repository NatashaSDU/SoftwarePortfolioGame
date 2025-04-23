#define REQUESTINPUT_H

#ifndef REQUEST_INPUT_H
#define REQUEST_INPUT_H

#include <string>
#include <map>

class RequestInput {
public:
    static RequestInput& getInstance(const std::string& promptText);

    RequestInput& addOption(const std::string& description);
    int ask() const;
    std::string getDescription(int value) const;

private:
    RequestInput();

    void reset(const std::string& newPrompt);

    std::map<int, std::string> options;
    std::string prompt;
    int currentIndex;
};

#endif
