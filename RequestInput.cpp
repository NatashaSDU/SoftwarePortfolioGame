#include "RequestInput.h"
#include <iostream>

RequestInput::RequestInput() : currentIndex(1) {}

RequestInput& RequestInput::getInstance(const std::string& promptText) {
    static RequestInput instance;
    instance.reset(promptText);
    return instance;
}

RequestInput& RequestInput::addOption(const std::string& description) {
    options[currentIndex++] = description;
    return *this;
}

int RequestInput::ask() const {
    int input;
    while (true) {
        std::cout << prompt << std::endl;
        for (const auto& [key, desc] : options) {
            std::cout << "  " << key << " - " << desc << std::endl;
        }

        std::cout << "Vælg et tal: ";
        std::cin >> input;

        if (options.find(input) != options.end()) {
            return input;
        }

        std::cout << "Ugyldigt input. Prøv igen." << std::endl;
    }
}

std::string RequestInput::getDescription(int value) const {
    if (options.count(value)) return options.at(value);
    return "";
}

void RequestInput::reset(const std::string& newPrompt) {
    options.clear();
    currentIndex = 1;
    prompt = newPrompt;
}
