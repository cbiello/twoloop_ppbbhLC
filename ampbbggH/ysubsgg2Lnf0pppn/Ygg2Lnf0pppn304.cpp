#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn304(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(3.)*pow(ex2,5)*pow(ex3,5)*(dd_real(1.) + ex3) + pow(dd_real(1.) + ex3,3)*(dd_real(66.) + dd_real(183.)*ex3 + dd_real(201.)*pow(ex3,2) + dd_real(71.)*pow(ex3,3))*pow(ex4,3) + dd_real(3.)*pow(ex2,4)*pow(ex3,4)*pow(dd_real(1.) + ex3,2)*(-dd_real(4.) + dd_real(3.)*ex4) + dd_real(3.)*ex2*ex3*pow(dd_real(1.) + ex3,2)*pow(ex4,2)*(-dd_real(42.) + dd_real(4.)*ex4 + pow(ex3,3)*(-dd_real(71.) + dd_real(4.)*ex4) + dd_real(3.)*pow(ex3,2)*(-dd_real(65.) + dd_real(4.)*ex4) + dd_real(3.)*ex3*(-dd_real(55.) + dd_real(4.)*ex4)) + dd_real(3.)*pow(ex2,2)*pow(ex3,2)*(dd_real(1.) + ex3)*ex4*(dd_real(24.) - dd_real(12.)*ex4 + pow(ex4,2) + dd_real(3.)*ex3*(dd_real(50.) - dd_real(12.)*ex4 + pow(ex4,2)) + dd_real(3.)*pow(ex3,2)*(dd_real(63.) - dd_real(12.)*ex4 + pow(ex4,2)) + pow(ex3,3)*(dd_real(71.) - dd_real(12.)*ex4 + pow(ex4,2))) - dd_real(1.)*pow(ex2,3)*pow(ex3,3)*(dd_real(9.)*(-dd_real(4.) + ex4)*ex4 + dd_real(3.)*ex3*(dd_real(46.) - dd_real(36.)*ex4 + dd_real(9.)*pow(ex4,2)) + dd_real(3.)*pow(ex3,2)*(dd_real(61.) - dd_real(36.)*ex4 + dd_real(9.)*pow(ex4,2)) + pow(ex3,3)*(dd_real(71.) - dd_real(36.)*ex4 + dd_real(9.)*pow(ex4,2)));
return res;
}
