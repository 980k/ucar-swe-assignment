#include <unordered_map>
#include <string>
#include <vector>

/**
* Helper methods for handling data in main.cpp
*/
void printModels(const std::unordered_map<int, std::pair<std::string, int>>& modelMap);

void displayErrorMessage(const std::string& message);

int getModelNumber(const std::string& input);

std::vector<double> getParameters(int numParameters);