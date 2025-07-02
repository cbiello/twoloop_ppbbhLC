#include "ampqq.h"
#include <complex>
#include <iostream>
#include <qd/qd_real.h>

std::complex<dd_real> treepppn(ExVariables ex){
    std::complex<dd_real> ex1=ex.ex1;
    std::complex<dd_real> ex2=ex.ex2;
    std::complex<dd_real> ex3=ex.ex3;
    std::complex<dd_real> ex4=ex.ex4;
    std::complex<dd_real> ex5=ex.ex5;
    std::complex<dd_real> ex6=ex.ex6;
    std::complex<dd_real> res=
    (ex4*(pow(ex2,2)*ex3*(dd_real(1.0) + ex4*(-dd_real(1.0) + ex5)) + 
      (dd_real(1.0) + ex3)*ex4*(ex4 - ex6) - 
      ex2*(ex4 + dd_real(2.0)*ex3*pow(ex4,2)*(-dd_real(1.0) + ex5) -
	   ex3*pow(ex6,2) +
	   ex3*ex4*(dd_real(1.0) + ex5 + dd_real(3.0)*ex6 - dd_real(2.0)*ex5*ex6))))/
  (ex3*(-((dd_real(1.0) + ex3)*ex4) + ex2*ex3*(dd_real(1.0) + ex4*(-dd_real(1.0) + ex5)))*
    (ex2 - ex4*ex5)*(ex4*(-dd_real(1.0) + ex3*(-dd_real(1.0) + ex2*(-dd_real(2.0) + ex5))) +
		     ex2*ex3*ex6))
;
    return res;
}


std::complex<dd_real> phasepppn(ExVariables ex){
    std::complex<dd_real> ex1=ex.ex1;
    std::complex<dd_real> ex2=ex.ex2;
    std::complex<dd_real> ex3=ex.ex3;
    std::complex<dd_real> ex4=ex.ex4;
    std::complex<dd_real> ex5=ex.ex5;
    std::complex<dd_real> ex6=ex.ex6;
    std::complex<dd_real> res=
				   ex1*ex1*(dd_real(1.0)/ex2+dd_real(1.0))*ex4;
				 return res;
}

std::complex<dd_real> newphasepppn(ExVariables ex){
    std::complex<dd_real> ex1=ex.ex1;
    std::complex<dd_real> ex2=ex.ex2;
    std::complex<dd_real> ex3=ex.ex3;
    std::complex<dd_real> ex4=ex.ex4;
    std::complex<dd_real> ex5=ex.ex5;
    std::complex<dd_real> ex6=ex.ex6;
    std::complex<dd_real> res=
				      ex1*(ex2*ex3-(ex3+dd_real(1.0))*ex4);
                                 return res;
}

std::complex<dd_real> permnewphasepppn(ExVariables ex){
    std::complex<dd_real> ex1=ex.ex1;
    std::complex<dd_real> ex2=ex.ex2;
    std::complex<dd_real> ex3=ex.ex3;
    std::complex<dd_real> ex4=ex.ex4;
    std::complex<dd_real> ex5=ex.ex5;
    std::complex<dd_real> ex6=ex.ex6;
    std::complex<dd_real> res=
				      ex1*ex1*(ex2*ex3-(ex3+dd_real(1.0))*ex4);
                                 return res;
}

std::complex<dd_real> permconjnewphasepppn(ExVariables ex){
    std::complex<dd_real> ex1=ex.ex1;
    std::complex<dd_real> ex2=ex.ex2;
    std::complex<dd_real> ex3=ex.ex3;
    std::complex<dd_real> ex4=ex.ex4;
    std::complex<dd_real> ex5=ex.ex5;
    std::complex<dd_real> ex6=ex.ex6;
    std::complex<dd_real> res=
					  ex1*(ex2+dd_real(1.0))*ex4/ex2;
                                 return res;
}
