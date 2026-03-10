/**
 * @file upc.cpp
 * @author Daisy Arcos
 * @date 2026-03-09
 * @brief This program validates UPC-A barcodes performing the UPC-A check digit algorithm.
 */
#include<iostream>
#include <vector>
#include "upc.h"
using namespace std;

// function 1 - extracts the digits in reverse order
// couldn't figure out how to extract the block of code like in the previous units 
// change vector type, ran into issues 
vector <int> breakIntIntoDigits(string num){
vector<int> digits; 
for (char c : num){
    digits.push_back(c-'0');
}
return digits; 
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
        //call my digit vector function 
        vector<int> manDigits = breakIntIntoDigits((userManNum));
        vector<int> proDigits = breakIntIntoDigits((userProNum));
        //step 1: add all the odd digits together
        int oddSum = userFirstNum + manDigits[1] + manDigits[3] + proDigits[0] + proDigits[2] + proDigits[4];
        cout << "Current Odd Sum: " << oddSum << endl;
        //step 2: mutliply by 3 
        int step2 = oddSum * 3;
        cout << step2 << endl; 
        //step 3: add all even numbers
        int evenNum = manDigits[0] + manDigits[2] + manDigits[4] + proDigits[1] + proDigits[3];
        int step3 = evenNum + step2;
        cout << step3 << endl; 
        //step 4: calc the modulo
        int step4Remained = step3 % 10; 
        int checkDigit;
        if (step4Remained == 0){
            checkDigit = 0;
            cout << "remained is 0";
        } else{
            checkDigit = 10 - step4Remained;
            cout << "remainder is " << checkDigit << endl;
            
        }



        // ask user if more upc code 
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
//add comments for this function 
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