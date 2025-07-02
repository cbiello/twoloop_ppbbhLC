#include <complex>
#include <qd/qd_real.h>
#include <iostream>
#include "ampgg.h"

std::complex<dd_real> treegppnn(ExVariables ex){
    std::complex<dd_real> ex1=ex.ex1;
    std::complex<dd_real> ex2=ex.ex2;
    std::complex<dd_real> ex3=ex.ex3;
    std::complex<dd_real> ex4=ex.ex4;
    std::complex<dd_real> ex5=ex.ex5;
    std::complex<dd_real> ex6=ex.ex6;
    std::complex<dd_real> res=	
dd_real(1.)/(pow(ex1,3)*(-dd_real(1.)*(dd_real(1.) + ex3)*ex4 + ex2*ex3*(dd_real(1.) + ex4*(-dd_real(1.) + ex5)))*((dd_real(1.) + ex3)*ex4*(ex4 - dd_real(1.)*ex6) + ex2*ex3*(ex4*(-dd_real(2.) + ex5) + ex6)));
    return res;
}


std::complex<dd_real> phasegppnn(ExVariables ex){
    std::complex<dd_real> ex1=ex.ex1;
    std::complex<dd_real> ex2=ex.ex2;
    std::complex<dd_real> ex3=ex.ex3;
    std::complex<dd_real> ex4=ex.ex4;
    std::complex<dd_real> ex5=ex.ex5;
    std::complex<dd_real> ex6=ex.ex6;
    std::complex<dd_real> res=
				   -(((dd_real(1.0) + ex2)*ex4)/(ex1*ex2*(dd_real(1.0) + ex4 - ex6)*((dd_real(1.0) + ex3)*ex4*(ex4 - ex6) + ex2*ex3*(ex4*(-dd_real(2.0) + ex5) + ex6))));
				 return res;
}

std::complex<dd_real> newphasegppnn(ExVariables ex){
    std::complex<dd_real> ex1=ex.ex1;
    std::complex<dd_real> ex2=ex.ex2;
    std::complex<dd_real> ex3=ex.ex3;
    std::complex<dd_real> ex4=ex.ex4;
    std::complex<dd_real> ex5=ex.ex5;
    std::complex<dd_real> ex6=ex.ex6;
    std::complex<dd_real> res=
				      -(pow(ex1,4)*ex4*(ex4 + ex3*(-ex2 + ex4)));
                                 return res;
}

std::complex<dd_real> permnewphasegppnn(ExVariables ex){
    std::complex<dd_real> ex1=ex.ex1;
    std::complex<dd_real> ex2=ex.ex2;
    std::complex<dd_real> ex3=ex.ex3;
    std::complex<dd_real> ex4=ex.ex4;
    std::complex<dd_real> ex5=ex.ex5;
    std::complex<dd_real> ex6=ex.ex6;
    std::complex<dd_real> res=
                                     -(((dd_real(1.0) + ex2)*ex4)/(ex1*ex2*(dd_real(1.0) + ex4 - ex6)*((dd_real(1.0) + ex3)*ex4*(ex4 - ex6) + ex2*ex3*(ex4*(-dd_real(2.0) + ex5) + ex6))));
                                 return res;
}

std::complex<dd_real> permconjnewphasegppnn(ExVariables ex){
    std::complex<dd_real> ex1=ex.ex1;
    std::complex<dd_real> ex2=ex.ex2;
    std::complex<dd_real> ex3=ex.ex3;
    std::complex<dd_real> ex4=ex.ex4;
    std::complex<dd_real> ex5=ex.ex5;
    std::complex<dd_real> ex6=ex.ex6;
    std::complex<dd_real> res=
				       -(pow(ex1,4)*ex4*(ex4 + ex3*(-ex2 + ex4)));
                                 return res;
}

