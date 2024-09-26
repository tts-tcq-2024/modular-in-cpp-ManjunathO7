#include<iostream>
#include"TestColorCoder.h"

int main() {
    testNumberToPair(4, TeleCommunicationColorCode::WHITE, TeleCommunicationColorCode::BROWN);
    testNumberToPair(5, TeleCommunicationColorCode::WHITE, TeleCommunicationColorCode::SLATE);

    testPairToNumber(TeleCommunicationColorCode::BLACK, TeleCommunicationColorCode::ORANGE, 12);
    testPairToNumber(TeleCommunicationColorCode::VIOLET, TeleCommunicationColorCode::SLATE, 25);

    std::cout << "\nColor Coding Reference Manual:\n" << std::endl;
    PrintColorCodingManual();
    
    return 0;
}
