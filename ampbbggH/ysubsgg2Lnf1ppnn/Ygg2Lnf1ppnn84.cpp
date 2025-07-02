#include <iostream>
#include "listYgg2Lnf1ppnn.h" 
#include <qd/qd_real.h>
#include <complex>
std::complex<dd_real> Ygg2Lnf1ppnn84(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(15.)*pow(ex2,4)*pow(ex3,2) + dd_real(15.)*pow(dd_real(1.) + dd_real(1.)*ex3,2)*pow(ex4,2) + pow(ex2,3)*ex3*(ex3*(dd_real(30.) - dd_real(30.)*ex4) + dd_real(35.)*ex4) + ex2*ex4*(ex3*(-dd_real(30.) - dd_real(5.)*ex4) - dd_real(35.)*ex4 + pow(ex3,2)*(-dd_real(30.) + dd_real(30.)*ex4)) + pow(ex2,2)*(ex3*(dd_real(5.) - dd_real(35.)*ex4)*ex4 + dd_real(22.)*pow(ex4,2) + pow(ex3,2)*(dd_real(15.) - dd_real(60.)*ex4 + dd_real(15.)*pow(ex4,2)));
return res;
}
