#include <iostream>
#include "listYgg2Lnf1pppn.h" 
#include <qd/qd_real.h>
#include <complex>
std::complex<dd_real> Ygg2Lnf1pppn115(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(5.)*pow(ex2,4)*pow(ex3,2)*(dd_real(3.) + dd_real(2.)*ex3) + dd_real(5.)*(dd_real(3.) + dd_real(2.)*ex3)*pow(ex4,2)*pow(-dd_real(1.) + ex3*(ex4 - dd_real(1.)*ex6),2) + dd_real(2.)*pow(ex2,3)*pow(ex3,2)*(dd_real(2.) - dd_real(4.)*(dd_real(8.) + dd_real(5.)*ex3)*ex4 + (dd_real(17.) + dd_real(10.)*ex3)*ex6) - dd_real(2.)*ex2*ex3*ex4*(dd_real(4.) + dd_real(4.)*ex3*(dd_real(8.) + dd_real(5.)*ex3)*pow(ex4,2) + dd_real(3.)*(dd_real(5.) + dd_real(4.)*ex3)*ex6 + ex3*(dd_real(17.) + dd_real(10.)*ex3)*pow(ex6,2) - dd_real(1.)*ex4*(dd_real(30.) + dd_real(30.)*pow(ex3,2)*ex6 + ex3*(dd_real(22.) + dd_real(49.)*ex6))) + pow(ex2,2)*ex3*(dd_real(2.)*ex3*(dd_real(49.) + dd_real(30.)*ex3)*pow(ex4,2) + ex3*ex6*(dd_real(4.) + (dd_real(19.) + dd_real(10.)*ex3)*ex6) - dd_real(2.)*ex4*(dd_real(15.) + dd_real(30.)*pow(ex3,2)*ex6 + ex3*(dd_real(14.) + dd_real(51.)*ex6)));
return res;
}
