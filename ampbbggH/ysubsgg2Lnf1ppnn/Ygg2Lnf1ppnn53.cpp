#include <iostream>
#include "listYgg2Lnf1ppnn.h" 
#include <qd/qd_real.h>
#include <complex>
std::complex<dd_real> Ygg2Lnf1ppnn53(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(6.)*pow(dd_real(1.) + dd_real(1.)*ex3,2)*pow(ex4,2) + pow(ex2,2)*(dd_real(6.) + dd_real(31.)*pow(ex4,2) + ex4*(dd_real(113.) - dd_real(31.)*ex6) + ex3*(dd_real(12.) + dd_real(37.)*pow(ex4,2) + ex4*(dd_real(181.) - dd_real(68.)*ex6) - dd_real(12.)*ex6) + pow(ex3,2)*(dd_real(6.) + dd_real(6.)*pow(ex4,2) + ex4*(dd_real(68.) - dd_real(37.)*ex6) - dd_real(6.)*ex6) - dd_real(6.)*ex6) + ex2*ex4*(-dd_real(12.) - dd_real(37.)*ex4 + dd_real(6.)*ex6 + pow(ex3,2)*(-dd_real(12.) - dd_real(31.)*ex4 + dd_real(6.)*ex6) + ex3*(-dd_real(24.) - dd_real(68.)*ex4 + dd_real(12.)*ex6)) + pow(ex2,3)*(-dd_real(76.) - dd_real(76.)*ex4 + dd_real(76.)*ex6 + pow(ex3,2)*(-dd_real(37.) - dd_real(6.)*ex4 + dd_real(37.)*ex6) + ex3*(-dd_real(113.) - dd_real(43.)*ex4 + dd_real(113.)*ex6));
return res;
}
