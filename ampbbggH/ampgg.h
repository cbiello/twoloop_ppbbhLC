
#ifndef ampgg_list
#define ampgg_list

#include <qd/qd_real.h>
#include <complex>
#include "../definition.h"

std::complex<dd_real> treegpppn(ExVariables ex);
std::complex<dd_real> phasegpppn(ExVariables ex);
std::complex<dd_real> newphasegpppn(ExVariables ex);
std::complex<dd_real> permnewphasegpppn(ExVariables ex);
std::complex<dd_real> permconjnewphasegpppn(ExVariables ex);

std::complex<dd_real> treegppnp(ExVariables ex);
std::complex<dd_real> phasegppnp(ExVariables ex);
std::complex<dd_real> newphasegppnp(ExVariables ex);
std::complex<dd_real> permnewphasegppnp(ExVariables ex);
std::complex<dd_real> permconjnewphasegppnp(ExVariables ex);

std::complex<dd_real> treegpppp(ExVariables ex);
std::complex<dd_real> phasegpppp(ExVariables ex);
std::complex<dd_real> newphasegpppp(ExVariables ex);
std::complex<dd_real> permnewphasegpppp(ExVariables ex);
std::complex<dd_real> permconjnewphasegpppp(ExVariables ex);

std::complex<dd_real> treegppnn(ExVariables ex);
std::complex<dd_real> phasegppnn(ExVariables ex);
std::complex<dd_real> newphasegppnn(ExVariables ex);
std::complex<dd_real> permnewphasegppnn(ExVariables ex);
std::complex<dd_real> permconjnewphasegppnn(ExVariables ex);

std::complex<dd_real> ggoneLnf0pppp(std::complex<dd_real>H[70],ExVariables ex);
std::complex<dd_real> ggoneLnf0pppn(std::complex<dd_real>H[70],std::complex<dd_real> SQRTS[3],ExVariables ex);
std::complex<dd_real> ggoneLnf0ppnp(std::complex<dd_real>H[70],std::complex<dd_real> SQRTS[3],ExVariables ex);
std::complex<dd_real> ggoneLnf0ppnn(std::complex<dd_real>H[70],ExVariables ex);

std::complex<dd_real> ggoneLnf1pppp(std::complex<dd_real>H[70],ExVariables ex);
std::complex<dd_real> ggoneLnf1pppn(std::complex<dd_real>H[70],ExVariables ex);
std::complex<dd_real> ggoneLnf1ppnp(std::complex<dd_real>H[70],ExVariables ex);
std::complex<dd_real> ggoneLnf1ppnn(std::complex<dd_real>H[70],ExVariables ex);

std::complex<dd_real> ggtwoLnf0ppppa(std::complex<dd_real>H[70],ExVariables ex);
std::complex<dd_real> ggtwoLnf0ppppb(std::complex<dd_real>H[70],ExVariables ex);
std::complex<dd_real> ggtwoLnf0ppppc(std::complex<dd_real>H[70],ExVariables ex);
std::complex<dd_real> ggtwoLnf0ppppd(std::complex<dd_real>H[70],ExVariables ex);
std::complex<dd_real> ggtwoLnf0ppppe(std::complex<dd_real>H[70], std::complex<dd_real> SQRTS[3] ,ExVariables ex);
std::complex<dd_real> ggtwoLnf0ppppsum(std::complex<dd_real>H[70], std::complex<dd_real> SQRTS[3],ExVariables ex);

std::complex<dd_real> ggtwoLnf0pppna(std::complex<dd_real>H[70],ExVariables ex);
std::complex<dd_real> ggtwoLnf0pppnb(std::complex<dd_real>H[70],ExVariables ex);
std::complex<dd_real> ggtwoLnf0pppnc(std::complex<dd_real>H[70],ExVariables ex);
std::complex<dd_real> ggtwoLnf0pppnd(std::complex<dd_real>H[70],ExVariables ex);
std::complex<dd_real> ggtwoLnf0pppne(std::complex<dd_real>H[70],std::complex<dd_real> SQRTS[3],ExVariables ex);
std::complex<dd_real> ggtwoLnf0pppnf(std::complex<dd_real>H[70],std::complex<dd_real> SQRTS[3],ExVariables ex);
std::complex<dd_real> ggtwoLnf0pppng(std::complex<dd_real>H[70], std::complex<dd_real> SQRTS[3],ExVariables ex);
std::complex<dd_real> ggtwoLnf0pppnsum(std::complex<dd_real>H[70], std::complex<dd_real> SQRTS[3],ExVariables ex);

std::complex<dd_real> ggtwoLnf0ppnpa(std::complex<dd_real>H[70],ExVariables ex);
std::complex<dd_real> ggtwoLnf0ppnpb(std::complex<dd_real>H[70],ExVariables ex);
std::complex<dd_real> ggtwoLnf0ppnpc(std::complex<dd_real>H[70],std::complex<dd_real> SQRTS[3],ExVariables ex);
std::complex<dd_real> ggtwoLnf0ppnpd(std::complex<dd_real>H[70],std::complex<dd_real> SQRTS[3], ExVariables ex);
std::complex<dd_real> ggtwoLnf0ppnpe(std::complex<dd_real>H[70],std::complex<dd_real> SQRTS[3] ,ExVariables ex);
std::complex<dd_real> ggtwoLnf0ppnpsum(std::complex<dd_real>H[70],std::complex<dd_real> SQRTS[3],ExVariables ex);


std::complex<dd_real> ggtwoLnf0ppnna(std::complex<dd_real>H[70],ExVariables ex);
std::complex<dd_real> ggtwoLnf0ppnnb(std::complex<dd_real>H[70],ExVariables ex);
std::complex<dd_real> ggtwoLnf0ppnnc(std::complex<dd_real>H[70],ExVariables ex);
std::complex<dd_real> ggtwoLnf0ppnnd(std::complex<dd_real>H[70],std::complex<dd_real> SQRTS[3] ,ExVariables ex);
std::complex<dd_real> ggtwoLnf0ppnnsum(std::complex<dd_real>H[70],std::complex<dd_real> SQRTS[3],ExVariables ex);

std::complex<dd_real> ggtwoLnf1pppp(std::complex<dd_real>H[70], std::complex<dd_real> SQRTS[3] ,ExVariables ex);
std::complex<dd_real> ggtwoLnf1pppn(std::complex<dd_real>H[70], std::complex<dd_real> SQRTS[3] ,ExVariables ex);
std::complex<dd_real> ggtwoLnf1ppnn(std::complex<dd_real>H[70], std::complex<dd_real> SQRTS[3] ,ExVariables ex);
std::complex<dd_real> ggtwoLnf1ppnp(std::complex<dd_real>H[70], std::complex<dd_real> SQRTS[3] ,ExVariables ex);

std::complex<dd_real> ggtwoLnf2pppp(std::complex<dd_real>H[70],ExVariables ex);
std::complex<dd_real> ggtwoLnf2pppn(std::complex<dd_real>H[70],ExVariables ex);
std::complex<dd_real> ggtwoLnf2ppnp(std::complex<dd_real>H[70],ExVariables ex);
std::complex<dd_real> ggtwoLnf2ppnn(std::complex<dd_real>H[70],ExVariables ex);


#endif
