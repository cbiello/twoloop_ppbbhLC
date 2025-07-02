#include <iostream>
#include "listYgg2Lnf1ppnn.h" 
#include <qd/qd_real.h>
#include <complex>
std::complex<dd_real> Ygg2Lnf1ppnn20(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
(-dd_real(442.) - dd_real(442.)*ex3)*pow(ex4,2) + ex2*ex4*(dd_real(433.) + ex3*(dd_real(884.) - dd_real(442.)*ex6)) + pow(ex2,2)*ex3*(-dd_real(442.) + dd_real(442.)*ex6);
return res;
}
