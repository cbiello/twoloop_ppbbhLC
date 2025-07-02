
#include <qd/qd_real.h>
#include "ampqq.h"
#include <complex>
#include <iostream>

     std::complex<dd_real>  qqtwoLnf0pppnsum(std::complex<dd_real> H[70] , std::complex<dd_real> SQRTS[3],ExVariables ex){

      std::complex<dd_real> res= qqtwoLnf0pppna(H,SQRTS,ex)+
	qqtwoLnf0pppnb(H,SQRTS,ex)+
	qqtwoLnf0pppnc(H,SQRTS,ex)+
	qqtwoLnf0pppnd(H,SQRTS,ex)+
	qqtwoLnf0pppne(H,SQRTS,ex)+
	qqtwoLnf0pppnf(H,SQRTS,ex)+
	qqtwoLnf0pppng(H,SQRTS,ex)+
	qqtwoLnf0pppnh(H,SQRTS,ex)+
	qqtwoLnf0pppni(H,SQRTS,ex)+
	qqtwoLnf0pppnj(H,SQRTS,ex);

      return res;
}
