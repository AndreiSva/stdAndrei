#ifndef __list
#define __list

#include <stdlib.h>
#include "../bool/bool.h"

typedef struct stda_list {
	void** array;
	long size;	
} stda_list;

stda_list* stda_initlist();
void* stda_at(stda_list* list, long x);
void stda_setat(stda_list* list, long x, void* value);

#endif
