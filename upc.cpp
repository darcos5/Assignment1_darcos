/**
 * @file upc.cpp
 * @author Daisy Arcos
 * @date 2026-03-09
 * @brief This program validates UPC-A barcodes performing the UPC-A check digit algorithm.
 */


/** 
 * Functional Requirements
 * The application must let the user test more than one UPC code without restarting the program. Programs that check only one code and then end will lose points.
 * The application must accurately validate or invalidate UPC codes. If not, points will be deducted.
 * You must create at least three custom functions not including the main function. If your program uses less than 3 custom functions, points will be deducted
*/
#include<iostream>
#include <vector>
#include "upc.h"
using namespace std;

// function 1 - extracts the digits in reverse order
// couldn't figure out how to extract the block of code like in the previous units 
vector <int> breakIntIntoDigits(int userManNum){
vector<int> manDigits; 
int temp = abs(userManNum); 
while (temp > 0){
   int digit = temp % 10; //extracts last digit from user input
    manDigits.push_back(digit);
    temp /=10;
    }
return manDigits; 
}
vector <int> breakIntIntoDigits(int userProNum){
vector<int> proDigits; 
int temp = abs(userProNum); 
while (temp > 0){
    int digit = temp % 10; //extracts last digit from user input
    proDigits.push_back(digit);
    temp /=10;
    }
return proDigits;
}

int main()
{
	// variables
    string userNumber = "Do you have a number to test? (y/n): ";
    string firstNum = "Enter the very first number of the UPC: ";
    string lastNum = "Enter the very last number of the UPC: ";
    string manuNum = "Enter the Manufactucrer number (the first set of 5 digits): ";
    string proNum = "Enter the Product number (the second set of 5 digits): ";
    string userAnswer;
    int userFirstNum; 
    int userLastNum; 
    string userManNum;
    string userProNum;



    cout << userNumber;
    cin >> userAnswer; 
    while (userAnswer == "y"){
        upcInfo(firstNum, userFirstNum, lastNum, userLastNum, manuNum, userManNum, proNum, userProNum);
        cout << userNumber;
        cin >> userAnswer;


        
    } 
    if (userAnswer == "n")
    {
        cout << "Ok goodbye" << endl; 
        return 0;   
    }




	return 0;
}

void upcInfo(std::__1::string &firstNum, int &userFirstNum, std::__1::string &lastNum, int &userLastNum, std::__1::string &manuNum, std::__1::string &userManNum, std::__1::string &proNum, std::__1::string &userProNum)
{
    cout << firstNum;
    cin >> userFirstNum;
    cout << lastNum;
    cin >> userLastNum;
    cout << manuNum;
    cin >> userManNum;
    cout << proNum;
    cin >> userProNum;
}