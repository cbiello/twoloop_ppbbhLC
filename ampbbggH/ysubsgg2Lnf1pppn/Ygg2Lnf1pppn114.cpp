#include <iostream>
#include "listYgg2Lnf1pppn.h" 
#include <qd/qd_real.h>
#include <complex>
std::complex<dd_real> Ygg2Lnf1pppn114(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
pow(ex2,6)*pow(ex3,4)*(dd_real(15.) + dd_real(20.)*ex3 + dd_real(8.)*pow(ex3,2)) + pow(dd_real(1.) + ex3,4)*(dd_real(15.) + dd_real(20.)*ex3 + dd_real(8.)*pow(ex3,2))*pow(ex4,4) + dd_real(2.)*ex2*ex3*pow(dd_real(1.) + ex3,3)*pow(ex4,3)*(-dd_real(28.) + dd_real(20.)*ex3*(-dd_real(2.) + ex4) + dd_real(8.)*pow(ex3,2)*(-dd_real(2.) + ex4) + dd_real(15.)*ex4) - dd_real(2.)*pow(ex2,5)*pow(ex3,3)*(dd_real(19.)*ex4 + dd_real(8.)*pow(ex3,3)*(-dd_real(1.) + dd_real(2.)*ex4) + dd_real(4.)*pow(ex3,2)*(-dd_real(5.) + dd_real(12.)*ex4) + dd_real(3.)*ex3*(-dd_real(5.) + dd_real(18.)*ex4)) + pow(ex2,2)*ex3*pow(dd_real(1.) + ex3,2)*pow(ex4,2)*(-dd_real(26.)*ex4 + dd_real(8.)*pow(ex3,3)*(dd_real(6.) - dd_real(8.)*ex4 + pow(ex4,2)) + dd_real(4.)*pow(ex3,2)*(dd_real(30.) - dd_real(44.)*ex4 + dd_real(5.)*pow(ex4,2)) + ex3*(dd_real(94.) - dd_real(152.)*ex4 + dd_real(15.)*pow(ex4,2))) - dd_real(2.)*pow(ex2,3)*pow(ex3,2)*(dd_real(1.) + ex3)*ex4*(ex4*(-dd_real(47.) + dd_real(13.)*ex4) + dd_real(16.)*pow(ex3,3)*(dd_real(1.) - dd_real(3.)*ex4 + pow(ex4,2)) + dd_real(8.)*pow(ex3,2)*(dd_real(5.) - dd_real(18.)*ex4 + dd_real(6.)*pow(ex4,2)) + dd_real(2.)*ex3*(dd_real(17.) - dd_real(77.)*ex4 + dd_real(24.)*pow(ex4,2))) + pow(ex2,4)*pow(ex3,2)*(dd_real(15.)*pow(ex4,2) + dd_real(2.)*ex3*ex4*(-dd_real(53.) + dd_real(57.)*ex4) + dd_real(8.)*pow(ex3,4)*(dd_real(1.) - dd_real(8.)*ex4 + dd_real(6.)*pow(ex4,2)) + dd_real(4.)*pow(ex3,3)*(dd_real(5.) - dd_real(52.)*ex4 + dd_real(42.)*pow(ex4,2)) + pow(ex3,2)*(dd_real(15.) - dd_real(256.)*ex4 + dd_real(222.)*pow(ex4,2)));
return res;
}
