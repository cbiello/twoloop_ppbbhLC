#include <complex>
#include <qd/qd_real.h>
#include <iostream>
#include "ampgg.h"

std::complex<dd_real> treegpppn(ExVariables ex){
    std::complex<dd_real> ex1=ex.ex1;
    std::complex<dd_real> ex2=ex.ex2;
    std::complex<dd_real> ex3=ex.ex3;
    std::complex<dd_real> ex4=ex.ex4;
    std::complex<dd_real> ex5=ex.ex5;
    std::complex<dd_real> ex6=ex.ex6;
    std::complex<dd_real> res=	


(-dd_real(1.)*ex4*(pow(dd_real(1.) + ex3,2)*pow(ex4,2)*pow(ex4 - dd_real(1.)*ex6,2) + pow(ex2,4)*pow(ex3,2)*(dd_real(1.) + ex4*(-dd_real(1.) + ex5))*(ex4*(-dd_real(2.) + ex5) + ex6) - dd_real(1.)*ex2*(dd_real(1.) + ex3)*ex4*(ex4 - dd_real(1.)*ex6)*(pow(ex4,2)*(-dd_real(1.) + ex3*(-dd_real(3.) + dd_real(2.)*ex5)) - dd_real(1.)*ex3*ex6*(dd_real(1.) + ex6) + ex4*(dd_real(1.) + ex6 + ex3*(dd_real(3.) - dd_real(2.)*(-dd_real(2.) + ex5)*ex6))) - dd_real(1.)*pow(ex2,3)*ex3*(ex4*(-dd_real(1.)*pow(ex4,2)*(-dd_real(1.) + ex5) + dd_real(2.)*ex6 + ex4*(-dd_real(3.) + ex5 - dd_real(1.)*ex6 + ex5*ex6)) + ex3*(dd_real(2.)*pow(ex4,3)*(dd_real(2.) - dd_real(3.)*ex5 + pow(ex5,2)) - dd_real(2.)*pow(ex6,2) + ex4*(dd_real(1.) + (dd_real(7.) - dd_real(2.)*ex5)*ex6 - dd_real(2.)*(-dd_real(1.) + ex5)*pow(ex6,2)) + pow(ex4,2)*(-dd_real(7.) - dd_real(6.)*ex6 - dd_real(2.)*pow(ex5,2)*ex6 + ex5*(dd_real(4.) + dd_real(8.)*ex6)))) + pow(ex2,2)*(pow(ex4,2)*(-dd_real(1.)*ex4 + ex6) + pow(ex3,2)*(pow(ex4,4)*(dd_real(2.) - dd_real(3.)*ex5 + pow(ex5,2)) + pow(ex6,3) + ex4*ex6*(-dd_real(2.) + (-dd_real(6.) + ex5)*ex6 + (-dd_real(1.) + ex5)*pow(ex6,2)) + pow(ex4,2)*(dd_real(3.) + (dd_real(13.) - dd_real(6.)*ex5)*ex6 + (dd_real(4.) - dd_real(5.)*ex5 + pow(ex5,2))*pow(ex6,2)) + pow(ex4,3)*(-dd_real(8.) - dd_real(5.)*ex6 - dd_real(2.)*pow(ex5,2)*ex6 + ex5*(dd_real(5.) + dd_real(7.)*ex6))) - dd_real(1.)*ex3*ex4*(dd_real(2.)*pow(ex4,3)*(-dd_real(1.) + ex5) - dd_real(1.)*pow(ex4,2)*(-dd_real(5.) + ex5 - dd_real(5.)*ex6 + dd_real(4.)*ex5*ex6) + ex6*(dd_real(2.) + ex6 + pow(ex6,2)) + ex4*(-dd_real(3.) - dd_real(6.)*ex6 - dd_real(4.)*pow(ex6,2) + ex5*(dd_real(1.) + ex6 + dd_real(2.)*pow(ex6,2)))))))/(ex2*ex3*(-dd_real(1.)*(dd_real(1.) + ex3)*ex4 + ex2*ex3*(dd_real(1.) + ex4*(-dd_real(1.) + ex5)))*(ex2 - dd_real(1.)*ex4*ex5)*(ex4*(-dd_real(1.) + ex3*(-dd_real(1.) + ex2*(-dd_real(2.) + ex5))) + ex2*ex3*ex6)*((dd_real(1.) + ex3)*ex4*(ex4 - dd_real(1.)*ex6) + ex2*ex3*(ex4*(-dd_real(2.) + ex5) + ex6)));
    return res;
}


std::complex<dd_real> phasegpppn(ExVariables ex){
    std::complex<dd_real> ex1=ex.ex1;
    std::complex<dd_real> ex2=ex.ex2;
    std::complex<dd_real> ex3=ex.ex3;
    std::complex<dd_real> ex4=ex.ex4;
    std::complex<dd_real> ex5=ex.ex5;
    std::complex<dd_real> ex6=ex.ex6;
    std::complex<dd_real> res=
				   -((pow(ex1,2)*(dd_real(1.0) + ex2)*pow(ex4,2)*(-dd_real(1.0) - ex4 + ex6))/(ex2*((dd_real(1.0) + ex3)*ex4*(ex4 - ex6) + ex2*ex3*(ex4*(-dd_real(2.0) + ex5) + ex6))));
				 return res;
}

std::complex<dd_real> newphasegpppn(ExVariables ex){
    std::complex<dd_real> ex1=ex.ex1;
    std::complex<dd_real> ex2=ex.ex2;
    std::complex<dd_real> ex3=ex.ex3;
    std::complex<dd_real> ex4=ex.ex4;
    std::complex<dd_real> ex5=ex.ex5;
    std::complex<dd_real> ex6=ex.ex6;
    std::complex<dd_real> res=
				      ex1*(ex4 + ex3*(-ex2 + ex4));
                                 return res;
}

std::complex<dd_real> permnewphasegpppn(ExVariables ex){
    std::complex<dd_real> ex1=ex.ex1;
    std::complex<dd_real> ex2=ex.ex2;
    std::complex<dd_real> ex3=ex.ex3;
    std::complex<dd_real> ex4=ex.ex4;
    std::complex<dd_real> ex5=ex.ex5;
    std::complex<dd_real> ex6=ex.ex6;
    std::complex<dd_real> res=
				      (pow(ex1,2)*(ex2*ex3 - (dd_real(1.0) + ex3)*ex4)*((dd_real(1.0) + ex3)*(ex4 - ex6) + (ex2*ex3*(ex4*(-dd_real(2.0) + ex5) + ex6))/ex4))/(dd_real(1.0) + ex4 - ex6);
                                 return res;
}

std::complex<dd_real> permconjnewphasegpppn(ExVariables ex){
    std::complex<dd_real> ex1=ex.ex1;
    std::complex<dd_real> ex2=ex.ex2;
    std::complex<dd_real> ex3=ex.ex3;
    std::complex<dd_real> ex4=ex.ex4;
    std::complex<dd_real> ex5=ex.ex5;
    std::complex<dd_real> ex6=ex.ex6;
    std::complex<dd_real> res=
				       -((ex1*(dd_real(1.0) + ex2)*ex4)/ex2);
                                 return res;
}

