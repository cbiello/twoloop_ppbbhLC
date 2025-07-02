#include <iostream>
#include "listYgg2Lnf1ppnn.h" 
#include <qd/qd_real.h>
#include <complex>
std::complex<dd_real> Ygg2Lnf1ppnn64(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
pow(ex2,4)*(-dd_real(4.) - dd_real(1.)*ex3)*pow(ex3,3) + (dd_real(2.) + dd_real(4.)*ex3 + dd_real(25.)*pow(ex3,2) - dd_real(2.)*pow(ex3,3) - dd_real(1.)*pow(ex3,4))*pow(ex4,2) + pow(ex2,3)*pow(ex3,2)*(-dd_real(10.)*ex4 + pow(ex3,2)*(-dd_real(2.) + dd_real(2.)*ex4) + ex3*(-dd_real(8.) + dd_real(6.)*ex4)) + ex2*ex3*ex4*(-dd_real(2.) + pow(ex3,2)*(dd_real(6.) - dd_real(4.)*ex4) + pow(ex3,3)*(dd_real(2.) - dd_real(2.)*ex4) + dd_real(4.)*ex4 + ex3*(-dd_real(10.) + dd_real(50.)*ex4)) + pow(ex2,2)*ex3*(-dd_real(2.)*ex4 + ex3*ex4*(-dd_real(20.) + dd_real(25.)*ex4) + pow(ex3,2)*(-dd_real(4.) + dd_real(12.)*ex4 - dd_real(2.)*pow(ex4,2)) + pow(ex3,3)*(-dd_real(1.) + dd_real(4.)*ex4 - dd_real(1.)*pow(ex4,2)));
return res;
}
