#include "Utility.h"

 int Utility::RequestInput(const std::string& prompt, const std::map<int, std::string>& options) {
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
