#include "ampqq.h"
#include <complex>
#include <iostream>
#include <qd/qd_real.h>


std::complex<dd_real> treeppnp(ExVariables ex){
    std::complex<dd_real> ex1=ex.ex1;
    std::complex<dd_real> ex2=ex.ex2;
    std::complex<dd_real> ex3=ex.ex3;
    std::complex<dd_real> ex4=ex.ex4;
    std::complex<dd_real> ex5=ex.ex5;
    std::complex<dd_real> ex6=ex.ex6;
    std::complex<dd_real> res= 
(pow(dd_real(1.0) + ex3,3)*pow(ex4,3)*(ex4 - ex6) + pow(ex2,3)*pow(ex3,3)*
  (pow(ex4,2)*(dd_real(2.0) - dd_real(3.0)*ex5 + pow(ex5,2)) + 
       ex4*(-dd_real(3.0) + dd_real(2.0)*ex5)*ex6 + pow(ex6,2)) - 
    ex2*pow(dd_real(1.0) + ex3,2)*pow(ex4,2)*
     (ex4 + dd_real(2.0)*ex3*pow(ex4,2)*(-dd_real(1.0) + ex5) - 
       ex3*ex6*(dd_real(2.0) + ex6) - 
       ex3*ex4*(-dd_real(3.0) + ex5 - dd_real(3.0)*ex6 + dd_real(2.0)*ex5*ex6)) - 
    pow(ex2,2)*ex3*(dd_real(1.0) + ex3)*ex4*
     (pow(ex4,2)*(-dd_real(1.0) + ex5)*(-dd_real(1.0) + ex3*(-dd_real(5.0) + dd_real(2.0)*ex5)) + 
       ex3*ex6*(dd_real(1.0) + dd_real(2.0)*ex6) + 
       ex4*(-dd_real(1.0) + ex3*(-dd_real(2.0) + ex5 - dd_real(6.0)*ex6 + dd_real(4.0)*ex5*ex6))))/
  (ex3*ex4*(-((dd_real(1.0) + ex3)*ex4) + ex2*ex3*(dd_real(1.0) + ex4*(-dd_real(1.0) + ex5)))*
    (-ex2 + ex4*ex5)*(ex4*(-dd_real(1.0) + ex3*(-dd_real(1.0) + ex2*(-dd_real(2.0) + ex5))) +
		       ex2*ex3*ex6))
;
    return res;
}



std::complex<dd_real> phaseppnp(ExVariables ex){
    std::complex<dd_real> ex1=ex.ex1;
    std::complex<dd_real> ex2=ex.ex2;
    std::complex<dd_real> ex3=ex.ex3;
    std::complex<dd_real> ex4=ex.ex4;
    std::complex<dd_real> ex5=ex.ex5;
    std::complex<dd_real> ex6=ex.ex6;
    std::complex<dd_real> res=
                                 -ex1*ex1*(ex2*ex3-(ex3+dd_real(1.0))*ex4);
				 return res;
}

std::complex<dd_real> newphaseppnp(ExVariables ex){
    std::complex<dd_real> ex1=ex.ex1;
    std::complex<dd_real> ex2=ex.ex2;
    std::complex<dd_real> ex3=ex.ex3;
    std::complex<dd_real> ex4=ex.ex4;
    std::complex<dd_real> ex5=ex.ex5;
    std::complex<dd_real> ex6=ex.ex6;
    std::complex<dd_real> res=
    -((ex1*(ex2+dd_real(1.0))*ex4)/ex2);
    return res;
}

std::complex<dd_real> permnewphaseppnp(ExVariables ex){
    std::complex<dd_real> ex1=ex.ex1;
    std::complex<dd_real> ex2=ex.ex2;
    std::complex<dd_real> ex3=ex.ex3;
    std::complex<dd_real> ex4=ex.ex4;
    std::complex<dd_real> ex5=ex.ex5;
    std::complex<dd_real> ex6=ex.ex6;
    std::complex<dd_real> res=
    -((ex1*ex1*(ex2+dd_real(1.0))*ex4)/ex2);
    return res;
}

std::complex<dd_real> permconjnewphaseppnp(ExVariables ex){
    std::complex<dd_real> ex1=ex.ex1;
    std::complex<dd_real> ex2=ex.ex2;
    std::complex<dd_real> ex3=ex.ex3;
    std::complex<dd_real> ex4=ex.ex4;
    std::complex<dd_real> ex5=ex.ex5;
    std::complex<dd_real> ex6=ex.ex6;
    std::complex<dd_real> res=
    -ex1 * (ex2*ex3-(ex3+dd_real(1.0))*ex4);
                                 return res;
}
