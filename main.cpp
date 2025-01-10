#include "pxt.h"
#include "MicroBitI2C.h"
#include "MicroBit.h"

#if MICROBIT_CODAL
#include "peripheral_alloc.h"
#endif

using namespace pxt;

namespace speech {

    //%
    int multiply(int input, int factor) {
#if MICROBIT_CODAL
        // V2
		return 10 * input * factor;
#else
        // V1
        return 3 * input * factor;
#endif
    }
}