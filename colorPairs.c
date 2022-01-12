#include <stdio.h>
#include "colorPairs.h"

const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};

const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

void ColorPairToString(const ColorPair* colorPair, char* buffer) {
    sprintf(buffer, "%s %s",
        MajorColorNames[colorPair->majorColor],
        MinorColorNames[colorPair->minorColor]);
}

ColorPair GetColorFromPairNumber(int pairNumber) {
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = (enum MajorColor)(zeroBasedPairNumber / TOTAL_NUMBER_OF_MIN_COLORS);
    colorPair.minorColor = (enum MinorColor)(zeroBasedPairNumber % TOTAL_NUMBER_OF_MIN_COLORS);
    return colorPair;
}

int GetPairNumberFromColor(const ColorPair* colorPair) {
    return (colorPair->majorColor * TOTAL_NUMBER_OF_MIN_COLORS) + (colorPair->minorColor + 1);
}

void PrintColorPairList(char* buffer)
{
    int pairNumberIdx = 1;
    ColorPair colorPair;
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    char pairNumberString[MAX_PAIR_NUMBER_CHARS];
    while (pairNumberIdx <= MAX_COLORPAIRS)
    {
        sprintf(pairNumberString, "\n%i - ", pairNumberIdx);
        strcat(buffer, pairNumberString);
        colorPair = GetColorFromPairNumber(pairNumberIdx++);
        ColorPairToString(&colorPair, colorPairNames);
        strcat(buffer, colorPairNames);
    }
}
