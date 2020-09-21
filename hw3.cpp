#include <iostream>
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

bool inDogish(std::string word)
{

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
     ///COMPLETE THIS TO HELP WITH RECURSION SETUP 
     return 0;
  } 
  else
  {
    return DogishHelper(word.substr(1,word.length()), letter);
  }
}