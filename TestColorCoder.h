#include"ColorCoder.h"
#include<iostream>

void PrintColorCodingManual();
void testNumberToPair(int pairNumber,TeleCommunicationColorCode::MajorColor expectedMajor,TeleCommunicationColorCode::MinorColor expectedMinor);
void testPairToNumber(TeleCommunicationColorCode::MajorColor major,TeleCommunicationColorCode::MinorColor minor,int expectedPairNumber);
