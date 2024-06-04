#include "FooEtAl.h"
#include "ModelClient.h"
#include "ModelFactory.h"
#include "HelperMethods.h"
#include <iostream>

int main() {
    std::unordered_map<int, std::pair<std::string, int>> modelMap = { {1, {"FooEtAl", 1}} }; // {key = index, value = {modelName, numParameters}}

    ModelClient modelClient;

    ModelFactory modelFactory;

    std::string userInput;

    do {
        // displays all available parameterization models and asks for user input
        printModels(modelMap);
        std::cout << "([q] to quit.)\n\n";
        std::cout << "Select a parameterization model: ";

        std::getline(std::cin, userInput);

        if (userInput == "q") break;

        int modelNumber = getModelNumber(userInput);

        if (!modelMap.contains(modelNumber)) {
            displayErrorMessage("Invalid input. Please select a valid option.");
            continue;
        }

        // creates model based on user input
        std::pair<std::string, int> selectedModel = modelMap[modelNumber];
        std::string modelName = selectedModel.first;
        std::unique_ptr<Parameterization> model = modelFactory.createModel(modelName);

        if (!model) {
            displayErrorMessage("Invalid model name: " + modelName);
            continue;
        }

        // injects model into client class and performs calculation
        modelClient.setModel(std::move(model));
        int numParameters = selectedModel.second;
        std::vector<double> parameters = getParameters(numParameters);
        double result = modelClient.calculate(parameters);

        std::cout << "Result: " << result << "\n\n";
    } while (userInput != "q");

    return 0;
}