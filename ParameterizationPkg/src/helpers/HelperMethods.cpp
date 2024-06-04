#include "HelperMethods.h"
#include <iostream>

// prints all available models
void printModels(const std::unordered_map<int, std::pair<std::string, int>>& modelMap) {
    for (const auto& model : modelMap) {
        std::cout << model.first << ". " << model.second.first << '\n';
    }
}

// prints error messages to user
void displayErrorMessage(const std::string& message) {
    std::cout << message << '\n';
}

// handles model selection from user input and returns if input is valid
int getModelNumber(const std::string& input) {
    try {
        return std::stoi(input);
    }
    catch (std::invalid_argument&) {
        return -1;
    }
    catch (std::out_of_range&) {
        return -1;
    }
}

// Gathers input from the user and returns a vector of parameters
std::vector<double> getParameters(int numParameters) {
    std::vector<double> parameters(numParameters);
    std::cout << "Enter " << numParameters << " parameter(s) separated by spaces as positive decimal values: ";
    for (int i = 0; i < numParameters; i++) {
        while (!(std::cin >> parameters[i]) || parameters[i] <= 0) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter a positive numeric value: ";
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    return parameters;
}