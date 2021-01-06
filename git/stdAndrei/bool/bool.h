#ifndef __bool
#define __bool

#define true 1
#define false 0

typedef char bool;

void toggle(bool* target) {
	if (*(target) == true) {
		*(target) = false;
	} else {
		*(target) = true;
	}
}

#endif
