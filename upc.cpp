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
using namespace std;

int main()
{
	// string variables
    string userNumber = "Do you have a number to test? (y/n): ";
    string firstNum = "Enter the very first number of the UPC: ";
    string lastNum = "Enter the very last number of the UPC: ";
    string manuNum = "Enter the Manufactucrer number (the first set of 5 digits): ";
    string proNum = "Enter the Product number (the second set of 5 digits): ";
    string userAnswer;
    int userFirstNum; 
    int userLastNum; 
    int userManNum;
    int userProNum;

    cout << userNumber;
    cin >> userAnswer; 
    cout << firstNum;
    cin >> userFirstNum;
    cout << lastNum;
    cin >> userLastNum;
    cout << manuNum;
    cin >> userManNum;
    cout << proNum;
    cin >> userProNum; 




	return 0;
}