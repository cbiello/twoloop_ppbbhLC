
#include "ampgg.h"
#include <complex>
#include <qd/qd_real.h>
#include <iostream>
#include "ysubsgg2Lnf0pppn/listYgg2Lnf0pppn.h"

    std::complex<dd_real>  ggtwoLnf0pppnsum(std::complex<dd_real> H[70],std::complex<dd_real> SQRTS[3],ExVariables ex){

      std::complex<dd_real> res= ggtwoLnf0pppna(H,ex)+
	ggtwoLnf0pppnb(H,ex)+
	ggtwoLnf0pppnc(H,ex)+
	ggtwoLnf0pppnd(H,ex)+
	ggtwoLnf0pppne(H,SQRTS,ex)+
	ggtwoLnf0pppnf(H,SQRTS,ex)+
	ggtwoLnf0pppng(H,SQRTS,ex);

      return res;
}
