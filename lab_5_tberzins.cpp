/**
 * @file Lab5_tberzins.cpp
 * @author Tali Berzins
 * @date 2026-10-05
 * @brief A program to generate a multiplication table with input validation.
 */

#include <iostream>
#include <string>

 using namespace std;

 /**
  * @brief: Explain that this function outputs an error message for invalid input.
  * @param: None.
  * @return: None (void).
  */

  void printInputValidationError(){
cout << "Error: The max digit must be greater than 4 and less than 10.   Please try again." << endl;
}





 /**
 * @brief Checks if the input is within the valid range.
 * @param input The integer value to be validated.
 * @return True if the input is valid (4 < input < 10), false otherwise.
 */
bool isMaxDigitInputValid(int input){
    return (input > 4 && input < 10);
}


/**
 * @brief: Prompts the user for input and ensures it is valid.
 * @param: None.
 * @return: A validated int representing the maximum digit.
 */
int getMaxDigitInput(){
    int maxDigit;
    cin >> maxDigit;

    return maxDigit;
}


/** 
* @brief: Prints the formatted multiplication table.
* @param: maxDigit - The highest digit to include in the table.
* @return: None (void).
*/
void printMultiplicationTable(int maxDigit){

    for(int i =1; i<=maxDigit; i++){
        for(int j =1; j<=maxDigit; j++){
            cout << i*j << " ";
        }
        cout << endl;
    }
}
/** 
 * @brief: Entry point of the program.
 * @param: None.
 * @return: 0 to indicate success.
 */
int main(){

