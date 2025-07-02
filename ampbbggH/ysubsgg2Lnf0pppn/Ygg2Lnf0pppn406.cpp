#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn406(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
pow(dd_real(1.) + ex3,2)*pow(ex4,2)*ex6*(dd_real(7.)*pow(ex4,3) + pow(ex4,2)*(dd_real(1.) - dd_real(4.)*ex6) + dd_real(3.)*ex6 + dd_real(6.)*ex4*(-dd_real(1.) + dd_real(2.)*ex6)) + pow(ex2,4)*pow(ex3,2)*(dd_real(3.) + dd_real(12.)*pow(ex4,3) + dd_real(3.)*pow(ex4,4) + pow(ex4,2)*(dd_real(18.) - dd_real(13.)*ex6) + ex4*(dd_real(12.) - dd_real(13.)*ex6 + dd_real(13.)*pow(ex6,2))) + ex2*(dd_real(1.) + ex3)*ex4*ex6*((dd_real(24.) + dd_real(26.)*ex3)*pow(ex4,4) + ex4*(dd_real(23.) + ex3*(dd_real(31.) - dd_real(45.)*ex6) - dd_real(15.)*ex6) + pow(ex4,3)*(dd_real(45.) + ex3*(dd_real(31.) - dd_real(14.)*ex6) - dd_real(6.)*ex6) - dd_real(1.)*(dd_real(5.) + dd_real(13.)*ex3)*ex6 + dd_real(2.)*pow(ex4,2)*(dd_real(22.) + dd_real(5.)*ex6 + dd_real(3.)*ex3*(dd_real(6.) + ex6))) + pow(ex2,2)*(-dd_real(1.)*ex6*(dd_real(22.)*ex6 + dd_real(24.)*pow(ex4,4)*(dd_real(1.) + ex6) + dd_real(15.)*pow(ex4,2)*(dd_real(3.) + dd_real(10.)*ex6) + pow(ex4,3)*(dd_real(52.) + dd_real(90.)*ex6) + ex4*(dd_real(17.) + dd_real(93.)*ex6)) - dd_real(1.)*ex3*ex6*(-dd_real(18.)*pow(ex4,5) + dd_real(12.)*ex6 + dd_real(3.)*pow(ex4,4)*(dd_real(7.) + dd_real(8.)*ex6) + pow(ex4,3)*(dd_real(65.) + dd_real(56.)*ex6) + ex4*(dd_real(47.) + dd_real(60.)*ex6) + pow(ex4,2)*(dd_real(73.) + dd_real(158.)*ex6)) + pow(ex3,2)*(dd_real(3.)*pow(ex4,6) - dd_real(3.)*pow(ex6,2) + dd_real(6.)*pow(ex4,5)*(dd_real(2.) + ex6) - dd_real(19.)*ex4*ex6*(dd_real(2.) + ex6) + pow(ex4,2)*(dd_real(3.) - dd_real(51.)*ex6 - dd_real(99.)*pow(ex6,2)) + pow(ex4,4)*(dd_real(18.) - dd_real(41.)*ex6 - dd_real(13.)*pow(ex6,2)) - dd_real(6.)*pow(ex4,3)*(-dd_real(2.) + dd_real(10.)*ex6 + dd_real(3.)*pow(ex6,2)))) - dd_real(1.)*pow(ex2,3)*ex3*(ex6*(-dd_real(5.) + dd_real(29.)*pow(ex4,3) + dd_real(18.)*pow(ex4,4) + ex4*(dd_real(9.) - dd_real(6.)*ex6) + dd_real(5.)*pow(ex4,2)*(dd_real(5.) + dd_real(4.)*ex6)) + ex3*(dd_real(6.)*pow(ex4,5) - dd_real(13.)*ex6 + dd_real(6.)*pow(ex4,4)*(dd_real(4.) + ex6) - dd_real(4.)*pow(ex4,3)*(-dd_real(9.) + dd_real(7.)*ex6) + ex4*(dd_real(6.) - dd_real(14.)*ex6 - dd_real(19.)*pow(ex6,2)) + pow(ex4,2)*(dd_real(24.) - dd_real(35.)*ex6 + dd_real(33.)*pow(ex6,2))));
return res;
}
