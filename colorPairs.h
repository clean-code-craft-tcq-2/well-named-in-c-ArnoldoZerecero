#define MAX_COLORPAIRS              25
#define MAX_COLORPAIR_NAME_CHARS    16
#define TOTAL_NUMBER_OF_MIN_COLORS  5
#define COLORPAIRS_FULL_LIST_CHARS  391

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

void ColorPairToString(const ColorPair* colorPair, char* buffer);

ColorPair GetColorFromPairNumber(int pairNumber);

int GetPairNumberFromColor(const ColorPair* colorPair);

void PrintColorPairList(char* buffer);
