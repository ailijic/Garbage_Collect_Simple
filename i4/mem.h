#pragma once

#include <stdint.h>
#include "tgc.h"

// void* Mem_ctor(intmax_t a_size);
#define Mem_ctor(m) Mem_ctor_imp(gcp_g, (m))

void* Mem_ctor_imp(tgc_t* a_gcp, intmax_t a_size);