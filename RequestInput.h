#define REQUESTINPUT_H

#ifndef REQUEST_INPUT_H
#define REQUEST_INPUT_H

#include <string>
#include <map>
#include "ProgramStatus.h"
#include "ProgramStatusManager.h"

class RequestInput {
public:
    static RequestInput& GetInstance(const std::string& promptText);

    RequestInput& AddOption(const std::string& description);
    int SelectedValue() const;
    std::string GetDescription(int value) const;

private:
    RequestInput();

    void Reset(const std::string& newPrompt);

    std::map<int, std::string> options;
    std::string prompt;
    int currentIndex;
};

#endif
