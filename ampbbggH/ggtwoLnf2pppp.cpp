#include <complex>
#include <qd/qd_real.h>
#include <iostream>
#include "ampgg.h"
    std::complex<dd_real> ggtwoLnf2pppp(std::complex<dd_real> H[70] ,ExVariables ex){
    std::complex<dd_real> ex1=ex.ex1;
    std::complex<dd_real> ex2=ex.ex2;
    std::complex<dd_real> ex3=ex.ex3;
    std::complex<dd_real> ex4=ex.ex4;
    std::complex<dd_real> ex5=ex.ex5;
    std::complex<dd_real> ex6=ex.ex6;
    std::complex<dd_real> res=
dd_real(0.004629629629629629)*pow(ex1,3)*ex2*(dd_real(4.)*(ex2 - (dd_real(1.)*(ex2*ex3 - dd_real(1.)*(dd_real(1.) + ex3)*ex4)*(ex2 - dd_real(1.)*ex4 + ex6))/(ex3*(ex2 - dd_real(1.)*ex4*ex5)) + (ex2*(dd_real(1.) + ex3)*ex4*(dd_real(1.) + ex4 - dd_real(1.)*ex6))/(ex4*(-dd_real(1.) + ex3*(-dd_real(1.) + ex2*(-dd_real(2.) + ex5))) + ex2*ex3*ex6))*(dd_real(20.) - dd_real(18.)*H[1] - dd_real(3.)*H[4] - dd_real(3.)*H[5]) - (dd_real(1.)*ex3*(ex2 - dd_real(1.)*ex4)*(ex4*(-dd_real(1.) + ex5) + ex6)*(dd_real(36.)*pow(H[1],2) + dd_real(15.)*pow(H[4],2) - dd_real(40.)*H[5] + dd_real(15.)*pow(H[5],2) + dd_real(4.)*H[1]*(-dd_real(20.) + dd_real(3.)*H[4] + dd_real(3.)*H[5]) + H[4]*(-dd_real(40.) + dd_real(6.)*H[5]) + dd_real(4.)*H[6]))/ex4);
    return res;
}
