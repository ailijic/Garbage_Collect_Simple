#pragma once

#include <assert.h>
#include <stdio.h>
#include "real.h"

static void test_real_neg(void) {
	Real a;
	F64 value = 1.0;
	Real_init(&a, value);
	Real* b = Real_neg(&a);
	assert(Real_asF64(b) == -value);
	fputs("Test Real_neg(): Success\n", stderr);
}

static void test_real(void) {
	test_real_neg();
}