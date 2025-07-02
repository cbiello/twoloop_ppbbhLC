
#include "ampgg.h"
#include <complex>
#include <qd/qd_real.h>
#include <iostream>
#include "ysubsgg2Lnf0ppnp/listYgg2Lnf0ppnp.h"

    std::complex<dd_real>  ggtwoLnf0ppnpsum(std::complex<dd_real> H[70],std::complex<dd_real> SQRTS[3],ExVariables ex){

      std::complex<dd_real> res= ggtwoLnf0ppnpa(H,ex)+
	ggtwoLnf0ppnpb(H,ex)+
	ggtwoLnf0ppnpc(H,SQRTS,ex)+
	ggtwoLnf0ppnpd(H,SQRTS,ex)+
	ggtwoLnf0ppnpe(H,SQRTS,ex);

      return res;
}
