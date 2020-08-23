#include <iostream>
#include <iomanip>
#include <ios>
#include "calcBandI.h"


void calBandINoAddDeposits(double openAmt, double interestRate, int yearCount ){
    //int monthCount = yearCount * 12;
    double earnedInterest;
    double totalEarned;
    double totalInterest = 0;
    int i;
    int j;
    double temp = openAmt;
    for(j = 0; j < yearCount; ++j){
        for(i = 0; i < 12; ++i){
            earnedInterest = temp * ((interestRate/100)/12);
            totalEarned = temp + earnedInterest;
            totalInterest = totalInterest + earnedInterest;
            temp = totalEarned;
        }
        std::cout << std::fixed << std::setprecision(2) << std::setw(6) << std::right << j + 1;
        std::cout << std::setw(22 - std::to_string(int(totalEarned)).length() -1) << std::right << "$";
        std::cout << totalEarned;
        std::cout << std::setw(27 - std::to_string(int(totalInterest)).length()) << std::right << "$" << totalInterest << std::endl;
        std::cout << std::endl;
        temp = totalEarned;
        totalInterest =0;
    }
}
void calBandIAddDeposits(double openAmt, double depAmt, double interestRate, int yearCount){
    //int monthCount = yearCount * 12;
    double earnedInterest;
    double totalEarned;
    double totalInterest = 0;
    int i;
    int j;
    double temp = openAmt;
    for(j = 0; j < yearCount; ++j){
        for(i = 0; i < 12; ++i){
            earnedInterest = (temp + depAmt) * ((interestRate/100)/12);
            totalEarned = temp + depAmt + earnedInterest;
            //std::cout << earnedInterest << "<--Earned Interest" << std::endl;;
            totalInterest = totalInterest + earnedInterest;
            temp = totalEarned;
        }

        std::cout << std::fixed << std::setprecision(2) << std::setw(6) << std::right << j + 1;
        std::cout << std::setw(22 - std::to_string(int(totalEarned)).length() -1) << std::right << "$";
        std::cout << totalEarned;
        std::cout << std::setw(27 - std::to_string(int(totalInterest)).length()) << std::right << "$" << totalInterest << std::endl;
        std::cout << std::endl;
        temp = totalEarned;
        totalInterest =0;
    }

}