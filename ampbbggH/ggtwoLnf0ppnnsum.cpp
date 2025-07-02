
#include "ampgg.h"
#include <complex>
#include <qd/qd_real.h>
#include <iostream>
#include "ysubsgg2Lnf0ppnn/listYgg2Lnf0ppnn.h"

    std::complex<dd_real>  ggtwoLnf0ppnnsum(std::complex<dd_real> H[70],std::complex<dd_real> SQRTS[3],ExVariables ex){

      std::complex<dd_real> res= ggtwoLnf0ppnna(H,ex)+
	ggtwoLnf0ppnnb(H,ex)+
	ggtwoLnf0ppnnc(H,ex)+
	ggtwoLnf0ppnnd(H,SQRTS,ex);
      return res;
}
