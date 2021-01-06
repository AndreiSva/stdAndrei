#include "list.h"

stda_list* stda_initlist() {
          stda_list* res = (stda_list*) malloc(sizeof(stda_list) * 1);
          res->size = 0;
          return res;
}

void* stda_at(stda_list* list, long x) {
	if (x > list->size) {
		return 0;
	}
	return list->array[x];
}

void stda_setat(stda_list* list, long x, void* value) {
	if (x > list->size) {
		return;
	}
	list->array[x] = value;
}
