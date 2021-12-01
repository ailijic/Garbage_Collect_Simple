#pragma once

#include <stdint.h>
#include "tgc.h"

#define ssizeof(m) (intmax_t)sizeof((m))
#define Mem_sizeof(m) (intmax_t)sizeof((m))

// void* Mem_ctor(intmax_t a_size);
#define Mem_ctor(m) Mem_ctor_imp(gcp_g, (m))
void* Mem_ctor_imp(tgc_t* a_gcp, intmax_t a_size);

// void Mem_dtor(intmax_t a_size);
#define Mem_dtor(m) Mem_dtor_imp(gcp_g, (m))
void Mem_dtor_imp(tgc_t* a_gcp, void* a_ptr);