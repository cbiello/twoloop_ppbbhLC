#include <qd/qd_real.h>
#include <complex>
#include <iostream>
#include "ampgg.h"
std::complex<dd_real> treegpppp(ExVariables ex){
    std::complex<dd_real> ex1=ex.ex1;
    std::complex<dd_real> ex2=ex.ex2;
    std::complex<dd_real> ex3=ex.ex3;
    std::complex<dd_real> ex4=ex.ex4;
    std::complex<dd_real> ex5=ex.ex5;
    std::complex<dd_real> ex6=ex.ex6;
    std::complex<dd_real> res=	
(-dd_real(1.)*pow(ex1,3)*ex2*ex3*(ex2 - dd_real(1.)*ex4)*(ex4*(-dd_real(1.) + ex5) + ex6))/ex4;
    return res;
}


std::complex<dd_real> phasegpppp(ExVariables ex){
    std::complex<dd_real> ex1=ex.ex1;
    std::complex<dd_real> ex2=ex.ex2;
    std::complex<dd_real> ex3=ex.ex3;
    std::complex<dd_real> ex4=ex.ex4;
    std::complex<dd_real> ex5=ex.ex5;
    std::complex<dd_real> ex6=ex.ex6;
    std::complex<dd_real> res=
				   pow(ex1,5)*(ex2*ex3 - (dd_real(1.0) + ex3)*ex4)*(-((dd_real(1.0) + ex3)*ex4) + ex2*ex3*(dd_real(1.0) + ex4*(-dd_real(1.0) + ex5)))*(-dd_real(1.0) - ex4 + ex6);
				 return res;
}

std::complex<dd_real> newphasegpppp(ExVariables ex){
    std::complex<dd_real> ex1=ex.ex1;
    std::complex<dd_real> ex2=ex.ex2;
    std::complex<dd_real> ex3=ex.ex3;
    std::complex<dd_real> ex4=ex.ex4;
    std::complex<dd_real> ex5=ex.ex5;
    std::complex<dd_real> ex6=ex.ex6;
    std::complex<dd_real> res=
				      -((dd_real(1.0) + ex2)/(pow(ex1,2)*pow(ex2,2)));
                                 return res;
}

std::complex<dd_real> permnewphasegpppp(ExVariables ex){
    std::complex<dd_real> ex1=ex.ex1;
    std::complex<dd_real> ex2=ex.ex2;
    std::complex<dd_real> ex3=ex.ex3;
    std::complex<dd_real> ex4=ex.ex4;
    std::complex<dd_real> ex5=ex.ex5;
    std::complex<dd_real> ex6=ex.ex6;
    std::complex<dd_real> res=
				      -(pow(ex1,5)*ex4*(-((dd_real(1.0) + ex3)*ex4) + ex2*ex3*(dd_real(1.0) + ex4*(-dd_real(1.0) + ex5)))*((dd_real(1.0) + ex3)*(ex4 - ex6) + (ex2*ex3*(ex4*(-dd_real(2.0) + ex5) + ex6))/ex4));
                                 return res;
}

std::complex<dd_real> permconjnewphasegpppp(ExVariables ex){
    std::complex<dd_real> ex1=ex.ex1;
    std::complex<dd_real> ex2=ex.ex2;
    std::complex<dd_real> ex3=ex.ex3;
    std::complex<dd_real> ex4=ex.ex4;
    std::complex<dd_real> ex5=ex.ex5;
    std::complex<dd_real> ex6=ex.ex6;
    std::complex<dd_real> res=
				       dd_real(1.0)/(pow(ex1,2)*ex2);
                                 return res;
}


