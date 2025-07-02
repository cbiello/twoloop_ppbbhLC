#include "ampgg.h"
#include <complex>
#include <qd/qd_real.h>
#include <iostream>

    std::complex<dd_real>  ggtwoLnf0ppppsum(std::complex<dd_real> H[70] , std::complex<dd_real> SQRTS[3],ExVariables ex){

      std::complex<dd_real> res= ggtwoLnf0ppppa(H,ex)+
	ggtwoLnf0ppppb(H,ex)+
	ggtwoLnf0ppppc(H,ex)+
	ggtwoLnf0ppppd(H,ex)+
	ggtwoLnf0ppppe(H,SQRTS,ex);

      return res;
}
