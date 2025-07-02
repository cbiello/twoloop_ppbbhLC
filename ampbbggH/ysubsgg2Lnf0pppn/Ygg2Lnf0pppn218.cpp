#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn218(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(21.)*pow(ex2,4)*pow(dd_real(1.) + ex4,2) - dd_real(7.)*pow(ex2,5)*pow(dd_real(1.) + ex4,2) + pow(ex4,2)*(dd_real(13.) + dd_real(47.)*ex4 + dd_real(20.)*pow(ex4,2)) + ex2*pow(ex4,2)*(dd_real(25.) + dd_real(117.)*ex4 + dd_real(48.)*pow(ex4,2)) + dd_real(2.)*pow(ex2,3)*(-dd_real(10.) - dd_real(20.)*ex4 - dd_real(7.)*pow(ex4,2) + dd_real(18.)*pow(ex4,3) + dd_real(7.)*pow(ex4,4)) + dd_real(2.)*pow(ex2,2)*(-dd_real(5.) - dd_real(10.)*ex4 + dd_real(4.)*pow(ex4,2) + dd_real(53.)*pow(ex4,3) + dd_real(21.)*pow(ex4,4));
return res;
}
