#ifndef COLORCODER_H
#define COLORCODER_H
#include<iostream>
#include <string>

namespace TeleCommunicationColorCode
{
    enum MajorColor { WHITE, RED, BLACK, YELLOW, VIOLET };
    enum MinorColor { BLUE, ORANGE, GREEN, BROWN, SLATE };

     extern const char* MajorColorNames[5];
     extern const char* MinorColorNames[5];

    class ColorPair {
    private:
        MajorColor majorColor;
        MinorColor minorColor;

    public:
        ColorPair(MajorColor major, MinorColor minor);
        MajorColor getMajor() const;
        MinorColor getMinor() const;
        std::string ToString() const;

        static  int numberOfMajorColors;
        static  int numberOfMinorColors;
    };

    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(TeleCommunicationColorCode::MajorColor major, TeleCommunicationColorCode::MinorColor minor);

}

#endif
