#include <qd/qd_real.h>
#include "ampqq.h"
#include <complex>
#include <iostream>
#include "ysubsqq2Lnf0ppnp/listYqq2Lnf0ppnp.h"

    std::complex<dd_real>  qqtwoLnf0ppnpsum(std::complex<dd_real> H[70] , std::complex<dd_real> SQRTS[3],ExVariables ex){

      std::complex<dd_real> res= qqtwoLnf0ppnpa(H,SQRTS,ex)+
	qqtwoLnf0ppnpb(H,SQRTS,ex)+
	qqtwoLnf0ppnpc(H,SQRTS,ex)+
	qqtwoLnf0ppnpd(H,SQRTS,ex)+
	qqtwoLnf0ppnpe(H,SQRTS,ex);

      return res;
}
