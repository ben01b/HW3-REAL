#include <iostream>
#include <string.h>
#include "hw3.h"

/****
* PSEUDOCODE:
* set start to 0 and end to length - 1
* while start less than end
* set temp to start start to end and end to temp
* start++
* end--
*/
void ReverseArray(int arr[], int length)
{
  int start = 0;
  int end = length - 1;

  while (start < end)
    {
      int temp = arr[start]; 
      arr[start] = arr[end];
      arr[end] = temp;
      start++;
      end--;
    } 
}

bool HasBalancedParentheses(std::string input)
{
  if(input[0] == ')')
    return false; 

  int open_count = 0;
  for(int i = 0; i < input.size(); i++)
  {
    if(input[i] == '(')
      open_count++;
    else if(input[i] == ')')
      open_count--;
  }
    
  if(open_count == 0)
    return true;
  else
    return false;
}

bool InXish(std::string word, std::string x)
{
  for(int i = 0; i < x.size(); i++)
      return XishHelper(word, x[i]);
}

bool XishHelper(std::string word, char letter)
{
  if(word == "")
  return false;

  if(word[0] == letter)
    return true;
  else
    return XishHelper(word.substr(1), letter);
}

bool InDogish(std::string word)
{
  std::string dog = "dog";
  for(int i = 0; i < 3; i++)
    return DogishHelper(word, dog[i]);
}

/****
* PSEUDOCODE:
*
*/
bool DogishHelper(std::string word, char letter)
{
  if(word == "")
  {
  return false;
  }
  std::cout << word << std::endl;

  if(word[0] == letter)
  {
    if(letter == 'd')
      return DogishHelper(word.substr(1), 'o');
    else if(letter == 'o')
      return DogishHelper(word.substr(1), 'g');
    else
      return true;
  } 
  else 
  {
    return DogishHelper(word.substr(1,word.length()), letter);
  }
}