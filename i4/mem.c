#include "i4/mem.h"
#include <assert.h>

void* Mem_ctor_imp(tgc_t* a_gcp, intmax_t a_size) {
	assert(a_size >= 0);
	void* vp = tgc_alloc(a_gcp, a_size);
	assert(vp != NULL);
	return vp;
}

void Mem_dtor_imp(tgc_t* a_gcp, void* a_ptr) {
	tgc_free(a_gcp, a_ptr);
}