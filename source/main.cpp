#include "pxt.h"
#include "MicroBitI2C.h"
#include "MicroBit.h"

#if MICROBIT_CODAL
#include "peripheral_alloc.h"
#endif

using namespace pxt;

namespace speech {

static void heard_keyword() {
    const char * happy_emoji ="\
        000,255,000,255,000\n\
        000,000,000,000,000\n\
        255,000,000,000,255\n\
        000,255,255,255,000\n\
        000,000,000,000,000\n";
    MicroBitImage img(happy_emoji);
    uBit.display.print(img);
}

    //%
    int multiply(int input, int factor) {
#if MICROBIT_CODAL
        // V2
		heard_keyword();
		return 10 * input * factor;
#else
        // V1
        return 3 * input * factor;
#endif
    }
}