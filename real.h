#pragma once

#include "i4/type.h"

typedef struct Real {
  F64 t;
} Real;

Real* Real_ctor(void);
void  Real_dtor(Real* a_this);
Real* Real_init(Real* a_this, F64 a_value);

F64 Real_asF64(Real* a_this);

Real* Real_neg(Real* a_value);
Real  Real_e  (Real a_value); // e^a_value

Real Real_add(Real a_lhs, Real a_rhs);
Real Real_sub(Real a_lhs, Real a_rhs);
Real Real_mul(Real a_lhs, Real a_rhs);
Real Real_div(Real a_lhs, Real a_rhs);