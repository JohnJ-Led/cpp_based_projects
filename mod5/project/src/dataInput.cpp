#include <iostream>
#include <cmath>
#include <limits>
#include <vector>
#include <iomanip>
#include <ios>
#include "dataInput.h"
#include "outputReport.h"
#include "calcBandI.h"


void dataInput(){

    //Variables
    unsigned int i;
    double openAmt;
    double depAmt;
    double interestRate;
    int yearCount;

    //Vector used to create menu.
    //Vector used to loop through string length for cursorAdjust
    std::vector<std::string> menuItems(5);
    menuItems.at(0) = "Initial Incestment Amount: ";
    menuItems.at(1) = "Monthly Deposit: ";
    menuItems.at(2) = "Annual Interest: ";
    menuItems.at(3) = "Number of years: ";
    menuItems.at(4) = "Press Enter to continue...";
    
    //Output Menu
    std::cout << "**********************************" << std::endl;
    std::cout << "********** Data Input ************" << std::endl;
        for(i = 0; i < menuItems.size(); ++i){
        std::cout << menuItems.at(i) << std::endl;
    }
    //Get input and adjust cursor position
    cursorAdjust(menuItems,5,0);
    std::cin >> openAmt;
    updateMenu(menuItems,0, openAmt);
    cursorAdjust(menuItems,0,1);
    std::cin >> depAmt;
    updateMenu(menuItems,1, depAmt);
    cursorAdjust(menuItems,0,2);
    std::cin >> interestRate;
    updateMenu(menuItems,2, interestRate);
    cursorAdjust(menuItems,0,3);
    std::cin >> yearCount;
    cursorAdjust(menuItems,0,4);
    std::cout << "\n" << std::endl;

    //Output Banlance and Interest Report
    outputReportNoDep();
    calBandINoAddDeposits(openAmt, interestRate, yearCount );
    outputReportDep();
    calBandIAddDeposits(openAmt, depAmt, interestRate, yearCount );

}
void cursorAdjust(std::vector<std::string> menuItems, int upMovement, int menuNum){
    /*************
     * This function is used to move the cursor to the end of each menu item.
     * It is expected that the user will enter a value and then hit enter to move to next line
     **************/
    //Variable
    unsigned int i;
    int j;
    char esc(27); //escape character
    std::cout << esc <<"\r";//got to line start

    //first for loop move cursor up upMovement number of lines
    //second for loop moves cursor to end of menu item 
    //FIXME: Expected of user to enter a value and then press enter. If no value entered process breaks
    for(j = 0; j < upMovement; ++j){
        std::cout << esc << "[1A";
    }
    for(i = 0; i < menuItems.at(menuNum).length(); ++i){
        std::cout << esc << "[1C";
    }
}
    

void updateMenu(std::vector<std::string> menuItems, int menuNum, double inputValue){
    /***********************
     * This function goes back to previous line and updates the visible output with fixed precision.
     * Adds the unit of the value for each line as well before going to next line for user input.
     * *********************/
    //Variable
    unsigned int i;
    char esc(27);

    //move cursor to line start and then up one
    std::cout << esc <<"\r";
    std::cout << esc << "[1A";
    
    //FIXME: Create an override function to expect either double or int value.
    //If statement used to determine unit based on menuNum.
    //For loop goes to end of line then out puts either value then unit or unit then value.
    if(menuNum != 2){
        for(i = 0; i < menuItems.at(menuNum).length(); ++i){
            std::cout << esc << "[1C";
        }
            std::cout << "$" << std::fixed << std::setprecision(2) << inputValue;
            std::cout << esc << "[1B";
    }
    else{
        for(i = 0; i < menuItems.at(menuNum).length(); ++i){
            std::cout << esc << "[1C";
        }
            std::cout << std::fixed << std::setprecision(0) << inputValue << "%";
            std::cout << esc << "[1B";

    }
}