#ifndef HW3_H
#define HW3_H
#include <string>

void ReverseArray(int arr[], int length);
bool HasBalancedParentheses(std::string input);
bool InXish(std::string word, std::string x);
bool XishHelper(std::string word, char letter);
bool InDogish(std::string word);
bool DogishHelper(std::string word, char letter);

#endif