#ifndef amp_list
#define amp_list

#include <qd/qd_real.h>
#include <complex>
#include "../definition.h"

std::complex<dd_real> treepppn(ExVariables ex);
std::complex<dd_real> phasepppn(ExVariables ex);
std::complex<dd_real> newphasepppn(ExVariables ex);
std::complex<dd_real> permnewphasepppn(ExVariables ex);
std::complex<dd_real> permconjnewphasepppn(ExVariables ex);

				  
std::complex<dd_real> treeppnp(ExVariables ex);
std::complex<dd_real> phaseppnp(ExVariables ex);
std::complex<dd_real> newphaseppnp(ExVariables ex);
std::complex<dd_real> permnewphaseppnp(ExVariables ex);
std::complex<dd_real> permconjnewphaseppnp(ExVariables ex);


std::complex<dd_real> qqoneLnf0pppn(std::complex<dd_real> H[70] ,ExVariables ex);
std::complex<dd_real> qqoneLnf1pppn(std::complex<dd_real> H[70] ,ExVariables ex);
std::complex<dd_real> qqoneLnf0ppnp(std::complex<dd_real> H[70] ,ExVariables ex);
std::complex<dd_real> qqoneLnf1ppnp(std::complex<dd_real> H[70] ,ExVariables ex);

std::complex<dd_real>  qqtwoLnf0pppnsum(std::complex<dd_real> H[70] , std::complex<dd_real> SQRTS[3],ExVariables ex);

std::complex<dd_real>  qqtwoLnf0pppna(std::complex<dd_real> H[70] , std::complex<dd_real> SQRTS[3],ExVariables ex);
std::complex<dd_real>  qqtwoLnf0pppnb(std::complex<dd_real> H[70] , std::complex<dd_real> SQRTS[3],ExVariables ex);
std::complex<dd_real>  qqtwoLnf0pppnc(std::complex<dd_real> H[70] , std::complex<dd_real> SQRTS[3],ExVariables ex);
std::complex<dd_real>  qqtwoLnf0pppnd(std::complex<dd_real> H[70] , std::complex<dd_real> SQRTS[3],ExVariables ex);
std::complex<dd_real>  qqtwoLnf0pppne(std::complex<dd_real> H[70] , std::complex<dd_real> SQRTS[3],ExVariables ex);
std::complex<dd_real>  qqtwoLnf0pppnf(std::complex<dd_real> H[70] , std::complex<dd_real> SQRTS[3],ExVariables ex);
std::complex<dd_real>  qqtwoLnf0pppng(std::complex<dd_real> H[70] , std::complex<dd_real> SQRTS[3],ExVariables ex);
std::complex<dd_real>  qqtwoLnf0pppnh(std::complex<dd_real> H[70] , std::complex<dd_real> SQRTS[3],ExVariables ex);
std::complex<dd_real>  qqtwoLnf0pppni(std::complex<dd_real> H[70] , std::complex<dd_real> SQRTS[3],ExVariables ex);
std::complex<dd_real>  qqtwoLnf0pppnj(std::complex<dd_real> H[70] , std::complex<dd_real> SQRTS[3],ExVariables ex);


std::complex<dd_real>  qqtwoLnf0ppnpsum(std::complex<dd_real> H[70] , std::complex<dd_real> SQRTS[3],ExVariables ex);

std::complex<dd_real>  qqtwoLnf0ppnpa(std::complex<dd_real> H[70] , std::complex<dd_real> SQRTS[3],ExVariables ex);
std::complex<dd_real>  qqtwoLnf0ppnpb(std::complex<dd_real> H[70] , std::complex<dd_real> SQRTS[3],ExVariables ex);
std::complex<dd_real>  qqtwoLnf0ppnpc(std::complex<dd_real> H[70] , std::complex<dd_real> SQRTS[3],ExVariables ex);
std::complex<dd_real>  qqtwoLnf0ppnpd(std::complex<dd_real> H[70] , std::complex<dd_real> SQRTS[3],ExVariables ex);
std::complex<dd_real>  qqtwoLnf0ppnpe(std::complex<dd_real> H[70] , std::complex<dd_real> SQRTS[3],ExVariables ex);

std::complex<dd_real>  qqtwoLnf1pppn(std::complex<dd_real> H[70] , std::complex<dd_real> SQRTS[3],ExVariables ex);
std::complex<dd_real>  qqtwoLnf1ppnp(std::complex<dd_real> H[70] , std::complex<dd_real> SQRTS[3],ExVariables ex);

std::complex<dd_real> qqtwoLnf2ppnp(std::complex<dd_real> H[70] ,ExVariables ex);
std::complex<dd_real> qqtwoLnf2pppn(std::complex<dd_real> H[70] ,ExVariables ex);

#endif
