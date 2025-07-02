#ifndef IRscheme
#define IRscheme

#include <complex>
#include <qd/qd_real.h>

dd_real qqI1epsm2(dd_real s12, dd_real s23, dd_real s34, dd_real s45, dd_real s15, dd_real s5, dd_real mu, dd_real nlight);
dd_real qqI1epsm1(dd_real s12, dd_real s23, dd_real s34, dd_real s45, dd_real s15, dd_real s5, dd_real mu, dd_real nlight);
dd_real qqI1eps0(dd_real s12, dd_real s23, dd_real s34, dd_real s45, dd_real s15, dd_real s5, dd_real mu, dd_real nlight);
dd_real qqI1epsp1(dd_real s12, dd_real s23, dd_real s34, dd_real s45, dd_real s15, dd_real s5, dd_real mu, dd_real nlight);
dd_real qqI1epsp2(dd_real s12, dd_real s23, dd_real s34, dd_real s45, dd_real s15, dd_real s5, dd_real mu, dd_real nlight);
dd_real qqI2eps0(dd_real s12, dd_real s23, dd_real s34, dd_real s45, dd_real s15, dd_real s5, dd_real mu, dd_real nlight);

std::complex<dd_real> ggI1epsm2(dd_real s12, dd_real s23, dd_real s34, dd_real s45, dd_real s15, dd_real s5, dd_real mu, dd_real nlight);
std::complex<dd_real> ggI1epsm1(dd_real s12, dd_real s23, dd_real s34, dd_real s45, dd_real s15, dd_real s5, dd_real mu, dd_real nlight);
std::complex<dd_real> ggI1eps0(dd_real s12, dd_real s23, dd_real s34, dd_real s45, dd_real s15, dd_real s5, dd_real mu, dd_real nlight);
std::complex<dd_real> ggI1epsp1(dd_real s12, dd_real s23, dd_real s34, dd_real s45, dd_real s15, dd_real s5, dd_real mu, dd_real nlight);
std::complex<dd_real> ggI1epsp2(dd_real s12, dd_real s23, dd_real s34, dd_real s45, dd_real s15, dd_real s5, dd_real mu, dd_real nlight);
std::complex<dd_real> ggI2eps0(dd_real s12, dd_real s23, dd_real s34, dd_real s45, dd_real s15, dd_real s5, dd_real mu, dd_real nlight);


#endif
