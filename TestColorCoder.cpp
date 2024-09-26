#include <iostream>
#include <assert.h>
#include <iomanip>
#include "TestColorCoder.h"

void testNumberToPair(int pairNumber,
    TeleCommunicationColorCode::MajorColor expectedMajor,
    TeleCommunicationColorCode::MinorColor expectedMinor)
{
    TeleCommunicationColorCode::ColorPair colorPair = TeleCommunicationColorCode::GetColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.ToString() << std::endl;
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
}

void testPairToNumber(
    TeleCommunicationColorCode::MajorColor major,
    TeleCommunicationColorCode::MinorColor minor,
    int expectedPairNumber)
{
    int pairNumber = GetPairNumberFromColor(major, minor);
    std::cout << "Got Pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}

void PrintColorCodingManual() {
    std::cout << std::left << std::setw(15) << "Pair Number" << std::setw(15) << "Major Color" << "Minor Color" << std::endl;
    for (int pairNumber = 1; pairNumber <= TeleCommunicationColorCode::ColorPair::numberOfMajorColors * TeleCommunicationColorCode::ColorPair::numberOfMinorColors; ++pairNumber)
    {
        TeleCommunicationColorCode::ColorPair colorPair = TeleCommunicationColorCode::GetColorFromPairNumber(pairNumber);
        std::cout << std::setw(15) << pairNumber
            << std::setw(15) << TeleCommunicationColorCode::MajorColorNames[colorPair.getMajor()]
            << TeleCommunicationColorCode::MinorColorNames[colorPair.getMinor()]
            << std::endl;
    }
}
