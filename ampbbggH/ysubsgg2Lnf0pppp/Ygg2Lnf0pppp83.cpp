#include <iostream>
#include "listYgg2Lnf0pppp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppp83(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
-dd_real(6.)*pow(ex4,4)*(dd_real(1.) + (dd_real(2.) + ex3)*pow(ex4,3) + ex4*(dd_real(5.) - dd_real(2.)*ex3*(-dd_real(1.) + ex6) - dd_real(2.)*ex6) - dd_real(1.)*pow(ex4,2)*(-dd_real(6.) + ex3*(-dd_real(3.) + ex6) + ex6)) + pow(ex2,4)*ex3*(dd_real(14.)*pow(ex4,4) - dd_real(2.)*pow(ex4,3)*(-dd_real(15.) + ex6) + dd_real(7.)*ex6 + dd_real(7.)*ex4*(-dd_real(1.) + dd_real(3.)*ex6) + pow(ex4,2)*(dd_real(9.) + dd_real(6.)*ex6)) - dd_real(3.)*pow(ex2,2)*pow(ex4,2)*(dd_real(6.) + dd_real(6.)*ex3*pow(ex4,4) + ex4*(dd_real(30.) + ex3*(dd_real(39.) - dd_real(45.)*ex6)) + (dd_real(4.) - dd_real(11.)*ex3)*ex6 + pow(ex4,3)*(-dd_real(2.)*ex3*(-dd_real(18.) + ex6) + dd_real(4.)*(dd_real(3.) + ex6)) + pow(ex4,2)*(ex3*(dd_real(69.) - dd_real(24.)*ex6) + dd_real(6.)*(dd_real(6.) + ex6))) + ex2*pow(ex4,3)*(dd_real(18.) + dd_real(2.)*(dd_real(6.) + dd_real(5.)*ex3)*pow(ex4,4) + ex4*(dd_real(102.) + ex3*(dd_real(67.) - dd_real(93.)*ex6) - dd_real(72.)*ex6) - dd_real(2.)*(dd_real(6.) + dd_real(5.)*ex3)*pow(ex4,3)*(-dd_real(6.) + ex6) - dd_real(1.)*(dd_real(12.) + dd_real(19.)*ex3)*ex6 - dd_real(3.)*pow(ex4,2)*(dd_real(6.)*(-dd_real(8.) + dd_real(3.)*ex6) + ex3*(-dd_real(39.) + dd_real(20.)*ex6))) - dd_real(3.)*pow(ex2,3)*ex4*(-dd_real(2.) + dd_real(2.)*(dd_real(2.) + ex3)*pow(ex4,4) + dd_real(7.)*ex3*ex6 - dd_real(2.)*pow(ex4,3)*(-dd_real(4.) + ex3*(dd_real(4.) + ex6)) + pow(ex4,2)*(dd_real(2.)*ex6 + ex3*(-dd_real(33.) + dd_real(8.)*ex6)) + ex4*(-dd_real(6.) + dd_real(4.)*ex6 + ex3*(-dd_real(23.) + dd_real(25.)*ex6)));
return res;
}
