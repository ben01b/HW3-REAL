#include <iostream>
#include "hw3.h"

int main() {
  //Test ReverseArray();

    //std::cout << DogishHelper("gadgdks",'d') << //std::endl;
  int arr[] = { 1, 2, 3, 4, 5 };
  int length = sizeof(arr)/sizeof(arr[0]);

	ReverseArray(arr, length);
  int n = sizeof(arr)/sizeof(arr[0]);
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << " ";
	}
  std::cout << std::endl;

  char char_arr[] = {"(()"};
  bool yes = HasBalancedParentheses(char_arr);
  if(yes == true)
    std::cout << "Balanced" << std::endl;
  else
    std::cout << "Not balanced" << std::endl;

//Test HasBalancedParentheses();
 /*std::string statement1 = "((())())";
 If(HasBalancedParentheses(statement1)){
   	std::cout << "Is it Ballanced: " << std:endl;
 }*/

// Test InDogish();
 /*std::string mydogs = "dpoags";
 If(InDogish(mydogs)){
   	std::cout << "Part of Dogish? " << std::endl;
 }*/

 // Test bool InXish(sting mytext, sting myword);

}


