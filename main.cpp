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
 * product function 
 *
 * @param int n 
 * @pre the user gives a number, n 
 * @return int total (product of 1 through the number)
 * @post returns the product starting at 1 until it reaches user number
 * 
 */
int product(int n); 


/**
 * main function 
 *
 * @pre 
 * @return int 
 * @post asks for user number, gets user number, calls sum and product, and outputs sum and product of 1 through the user given number for the user
 * 
 */
int main() {
  int n;
 
  cout << "Give me a number." << endl;
  cin >> n; 

  int sValue = sum(n);
  int pValue = product(n);
  
  cout << "This is the sum of all the numbers starting at 1 until reaching your number: " << sValue << endl;

  cout << "This is the product of all the numbers starting at 1 until reaching your number: " << pValue << endl;
  return 0;
};

int sum(int n){
  int total = 0; 
  for (int i = 1; i <=  n; i++){
      total += i; 
	}

    return total; 
};

int product(int n){
  int total = 1;
  for (int i = 1; i <= n; i++){
    total *= i;
  }

  return total;
}; 
