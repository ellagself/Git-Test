/**
 * @file main.cpp
 * @author Ella Self
 * @date 2024-09-06
 * @brief main function for git practice
 * 
 * originally hello world, now sum of 1- user number
 */


#include <iostream>

using namespace std;


/**
 * sum of the user given number and all numbers before starting at 1
 *
 * @param int n 
 * @pre int n is given by the user
 * @return int total 
 * @post returns the sum of 1-n
 * 
 */
int sum(int n); 



/**
 * main function 
 *
 * @pre 
 * @return int 
 * @post asks for user number, gets user number, calls sum, and outputs sum of 1 through the user given number for the user
 * 
 */
int main() {
  int n;
 
  cout << "Give me a number." << endl;
  cin >> n; 

  int value = sum(n);
  
  cout << "This is the sum of all the numbers starting at 1 until reaching your number: " << value << endl;
  
  return 0;
};

int sum(int n){
  int total = 0 ; 
  for (int i = 1; i <=  n; i++){
      total += i; 
	}

    return total; 
};
