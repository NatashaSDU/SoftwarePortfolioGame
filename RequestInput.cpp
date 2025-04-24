#include "RequestInput.h"
#include <iostream>

RequestInput::RequestInput() : currentIndex(0) {}

RequestInput& RequestInput::GetInstance(const std::string& promptText) {
    static RequestInput instance;
    instance.Reset(promptText);
    return instance;
}

RequestInput& RequestInput::AddOption(const std::string& description) {
    options[currentIndex++] = description;
    return *this;
}

int RequestInput::SelectedValue() const {
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

std::string RequestInput::GetDescription(int value) const {
    if (options.count(value)) return options.at(value);
    return "";
}

void RequestInput::Reset(const std::string& newPrompt) {
    options.clear();
    currentIndex = 1;
    prompt = newPrompt;
}
