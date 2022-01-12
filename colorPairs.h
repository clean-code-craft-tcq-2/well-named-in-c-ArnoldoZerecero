#define MAX_COLORPAIRS              25
#define MAX_COLORPAIR_NAME_CHARS    16
#define MAX_PAIR_NUMBER_CHARS       5
#define TOTAL_NUMBER_OF_MIN_COLORS  5
#define COLORPAIRS_FULL_LIST_CHARS  366

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

void ColorPairToString(const ColorPair* colorPair, char* buffer);

ColorPair GetColorFromPairNumber(int pairNumber);

int GetPairNumberFromColor(const ColorPair* colorPair);

void PrintColorPairList(char* buffer);
