#include <iostream>
#include "outputReport.h"

//Both function have the sould purpose of createing the report headers.
//This is probably pointless.

void outputReportDep(){

    std::cout << "      Balance and Interest With Additional Monthly Deposits     " << std::endl;
    std::cout << "================================================================" << std::endl;
    std::cout << "  Year        Year End Balance      Year End Earned Interest    " << std::endl;
    std::cout << "----------------------------------------------------------------" << std::endl;

}

void outputReportNoDep(){

    std::cout << "    Balance and Interest Without Additional Monthly Deposits    " << std::endl;
    std::cout << "================================================================" << std::endl;
    std::cout << "  Year        Year End Balance      Year End Earned Interest    " << std::endl;
    std::cout << "----------------------------------------------------------------" << std::endl;

}
