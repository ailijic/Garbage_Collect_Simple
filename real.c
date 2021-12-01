#include "i4/type.h"
#include "i4/mem.h"
#include "real.h"
#include <math.h>

Real* Real_ctor(void) {
	Real r;
	return Mem_ctor(ssizeof(r)); }

void  Real_dtor(Real* a_this) { Mem_dtor(a_this); }

Real* Real_init(Real* a_this, F64 a_value) {
  a_this->t = a_value;
  return a_this;
}

F64 Real_asF64(Real a_this) { return a_this.t; }

Real Real_neg(Real a_value) {
  return (Real){.t = -a_value.t};
}

Real Real_e(Real a_value) { // e^a_value
  return (Real){.t = exp(a_value.t)};
}

Real Real_add(Real a_lhs, Real a_rhs)
{
  return (Real){.t = a_lhs.t + a_rhs.t};
}

Real  Real_sub(Real a_lhs, Real a_rhs)
{
  return (Real){.t = a_lhs.t - a_rhs.t};
}

Real  Real_mul(Real a_lhs, Real a_rhs)
{
  return (Real){.t = a_lhs.t * a_rhs.t};
}

Real  Real_div(Real a_lhs, Real a_rhs)
{
  return (Real){.t = a_lhs.t / a_rhs.t};
}
