#include "pxt.h"

using namespace pxt;

namespace cpp {
	//%
	void led(){
		uBit.display.image.setPixelValue(0, 0, 255);
	}
}