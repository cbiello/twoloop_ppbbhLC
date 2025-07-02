#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn307(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
pow(ex2,4)*pow(ex3,2)*(ex4*(dd_real(14.) - dd_real(32.)*ex6) + dd_real(3.)*(-dd_real(2.) + ex6) + dd_real(4.)*pow(ex4,2)*(dd_real(5.) + ex6)) - dd_real(1.)*pow(dd_real(1.) + ex3,2)*pow(ex4,2)*(dd_real(7.)*pow(ex4,3) - dd_real(3.)*ex6 - dd_real(4.)*pow(ex4,2)*(dd_real(3.) + ex6) + ex4*(-dd_real(19.) + dd_real(32.)*ex6)) - dd_real(1.)*ex2*(dd_real(1.) + ex3)*ex4*(dd_real(4.)*(dd_real(6.) + dd_real(5.)*ex3)*pow(ex4,4) + dd_real(6.)*(dd_real(2.) + ex3)*ex6 + ex4*(ex3*(dd_real(57.) - dd_real(70.)*ex6) + dd_real(6.)*(dd_real(4.) + dd_real(3.)*ex6)) - dd_real(1.)*pow(ex4,3)*(-dd_real(20.) + dd_real(6.)*ex6 + ex3*(dd_real(7.) + dd_real(8.)*ex6)) + pow(ex4,2)*(dd_real(20.) + dd_real(78.)*ex6 + dd_real(6.)*ex3*(dd_real(5.) + dd_real(12.)*ex6))) + pow(ex2,2)*((dd_real(4.) + dd_real(12.)*ex3 + dd_real(3.)*pow(ex3,2))*ex6 + ex4*(dd_real(5.) + dd_real(48.)*ex3 + pow(ex3,2)*(dd_real(57.) - dd_real(44.)*ex6) + dd_real(28.)*ex6) + pow(ex4,3)*(dd_real(27.) + ex3*(dd_real(68.) - dd_real(92.)*ex6) + pow(ex3,2)*(dd_real(21.) - dd_real(48.)*ex6) + dd_real(30.)*ex6) + pow(ex4,4)*(dd_real(24.)*(dd_real(1.) + ex6) + dd_real(4.)*pow(ex3,2)*(dd_real(15.) + ex6) + ex3*(dd_real(88.) + dd_real(6.)*ex6)) + pow(ex4,2)*(dd_real(8.) + dd_real(69.)*ex6 + dd_real(9.)*pow(ex3,2)*(dd_real(2.) + dd_real(15.)*ex6) + dd_real(4.)*ex3*(dd_real(7.) + dd_real(31.)*ex6))) - dd_real(1.)*pow(ex2,3)*ex3*(dd_real(5.) + pow(ex4,2)*(dd_real(41.) - dd_real(78.)*ex6) + ex4*(dd_real(2.) - dd_real(18.)*ex6) - dd_real(12.)*ex6 + pow(ex4,3)*(dd_real(44.) + dd_real(6.)*ex6) + ex3*(dd_real(19.) + pow(ex4,2)*(dd_real(35.) - dd_real(72.)*ex6) - dd_real(6.)*ex6 + pow(ex4,3)*(dd_real(60.) + dd_real(8.)*ex6) + ex4*(-dd_real(6.) + dd_real(70.)*ex6)));
return res;
}
