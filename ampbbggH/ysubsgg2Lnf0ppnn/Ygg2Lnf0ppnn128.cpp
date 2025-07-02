#include <iostream>
#include "listYgg2Lnf0ppnn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnn128(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(138.)*pow(ex2,4)*pow(ex3,2) - dd_real(2.)*pow(ex2,3)*ex3*(dd_real(869.)*ex4 + dd_real(69.)*ex3*(-dd_real(1.) + dd_real(3.)*ex4 - dd_real(2.)*ex6)) - dd_real(6.)*ex4*((-dd_real(21.) + dd_real(2.)*ex3 + dd_real(23.)*pow(ex3,2))*pow(ex4,2) - dd_real(1.)*(dd_real(15.) + dd_real(21.)*ex3 + dd_real(46.)*pow(ex3,2))*ex4*ex6 + ex3*(dd_real(19.) + dd_real(23.)*ex3)*pow(ex6,2)) + pow(ex2,2)*(dd_real(1600.)*pow(ex4,2) + ex3*ex4*(-dd_real(1173.) + dd_real(2315.)*ex4 - dd_real(2417.)*ex6) + dd_real(138.)*pow(ex3,2)*(dd_real(3.)*pow(ex4,2) + ex6*(dd_real(2.) + ex6) - dd_real(1.)*ex4*(dd_real(3.) + dd_real(4.)*ex6))) + ex2*(-dd_real(1.)*(dd_real(463.) + dd_real(577.)*ex3 + dd_real(138.)*pow(ex3,2))*pow(ex4,3) + dd_real(138.)*pow(ex3,2)*pow(ex6,2) - dd_real(1.)*ex3*ex4*ex6*(dd_real(1287.) + dd_real(679.)*ex6 + dd_real(138.)*ex3*(dd_real(4.) + ex6)) + pow(ex4,2)*(dd_real(1011.) + dd_real(679.)*ex6 + dd_real(138.)*pow(ex3,2)*(dd_real(3.) + dd_real(2.)*ex6) + ex3*(dd_real(1185.) + dd_real(1256.)*ex6)));
return res;
}
