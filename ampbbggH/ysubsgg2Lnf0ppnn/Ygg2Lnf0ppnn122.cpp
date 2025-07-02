#include <iostream>
#include "listYgg2Lnf0ppnn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnn122(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
pow(ex2,4)*(dd_real(145.)*pow(ex4,2) + dd_real(12.)*ex3*(-dd_real(10.) + ex4)*ex4*(dd_real(1.) + ex4 - dd_real(1.)*ex6) + dd_real(3.)*pow(ex3,2)*(-dd_real(19.) - dd_real(4.)*ex4 + pow(ex4,2))*pow(dd_real(1.) + ex4 - dd_real(1.)*ex6,2)) - dd_real(6.)*pow(ex2,5)*ex3*(dd_real(2.)*ex4 + ex3*(-dd_real(1.) + ex4)*(dd_real(1.) + ex4 - dd_real(1.)*ex6))*(dd_real(1.) + ex4 - dd_real(1.)*ex6) - dd_real(24.)*ex2*(dd_real(1.) + ex3)*ex4*(ex4*(dd_real(1.) + dd_real(5.)*ex4 - dd_real(5.)*ex6) + dd_real(5.)*ex3*(-dd_real(1.) + ex4)*(dd_real(1.) + ex4 - dd_real(1.)*ex6))*(dd_real(1.) + ex4 - dd_real(1.)*ex6) + dd_real(3.)*pow(ex2,6)*pow(ex3,2)*pow(dd_real(1.) + ex4 - dd_real(1.)*ex6,2) - dd_real(60.)*pow(dd_real(1.) + ex3,2)*pow(ex4,2)*pow(dd_real(1.) + ex4 - dd_real(1.)*ex6,2) + dd_real(2.)*pow(ex2,3)*(pow(ex4,2)*(dd_real(181.) + dd_real(36.)*ex4 - dd_real(36.)*ex6) + dd_real(3.)*pow(ex3,2)*(-dd_real(20.) + dd_real(19.)*ex4 + pow(ex4,2))*pow(dd_real(1.) + ex4 - dd_real(1.)*ex6,2) + dd_real(6.)*ex3*ex4*(-dd_real(7.) + dd_real(20.)*pow(ex4,2) + ex4*(dd_real(13.) - dd_real(30.)*ex6) - dd_real(3.)*ex6 + dd_real(10.)*pow(ex6,2))) + pow(ex2,2)*(-dd_real(3.)*pow(ex3,2)*(dd_real(20.) - dd_real(80.)*ex4 + dd_real(19.)*pow(ex4,2))*pow(dd_real(1.) + ex4 - dd_real(1.)*ex6,2) + pow(ex4,2)*(dd_real(259.) - dd_real(54.)*pow(ex4,2) - dd_real(60.)*ex6 - dd_real(54.)*pow(ex6,2) + dd_real(12.)*ex4*(dd_real(5.) + dd_real(9.)*ex6)) - dd_real(12.)*ex3*ex4*(dd_real(10.)*pow(ex4,3) - dd_real(1.)*pow(ex4,2)*(dd_real(17.) + dd_real(20.)*ex6) - dd_real(4.)*(dd_real(3.) - dd_real(8.)*ex6 + dd_real(5.)*pow(ex6,2)) + ex4*(-dd_real(39.) + dd_real(37.)*ex6 + dd_real(10.)*pow(ex6,2))));
return res;
}
