#include<iostream>
#include "ColorCoder.h"

namespace TeleCommunicationColorCode
{
    const char* MajorColorNames[5] = { "White", "Red", "Black", "Yellow", "Violet" };
    const char* MinorColorNames[5] = { "Blue", "Orange", "Green", "Brown", "Slate" };

    int ColorPair::numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
    int ColorPair::numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

    ColorPair::ColorPair(MajorColor major, MinorColor minor) : majorColor(major), minorColor(minor) {}

    MajorColor ColorPair::getMajor() const { return majorColor; }
    MinorColor ColorPair::getMinor() const { return minorColor; }

    std::string ColorPair::ToString() const {
        return std::string(MajorColorNames[majorColor]) + " " + MinorColorNames[minorColor];
    }

    ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = (MajorColor)(zeroBasedPairNumber / ColorPair::numberOfMinorColors);
        MinorColor minorColor = (MinorColor)(zeroBasedPairNumber % ColorPair::numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }

    int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return major * ColorPair::numberOfMinorColors + minor + 1;
    }
}
