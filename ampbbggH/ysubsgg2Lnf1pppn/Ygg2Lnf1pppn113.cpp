#include <iostream>
#include "listYgg2Lnf1pppn.h" 
#include <qd/qd_real.h>
#include <complex>
std::complex<dd_real> Ygg2Lnf1pppn113(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(2.)*pow(ex2,8)*pow(ex3,5) + pow(dd_real(1.) + ex3,4)*(-dd_real(1.) + dd_real(2.)*ex3 - dd_real(3.)*ex4)*pow(ex4,4) - dd_real(1.)*pow(ex2,7)*pow(ex3,4)*(dd_real(1.) + dd_real(8.)*ex3*(-dd_real(1.) + ex4) + dd_real(7.)*ex4) + ex2*pow(dd_real(1.) + ex3,3)*pow(ex4,3)*(dd_real(1.) + dd_real(8.)*pow(ex3,2)*(-dd_real(1.) + ex4) + ex4 - dd_real(2.)*pow(ex4,2) + ex3*(dd_real(4.) + dd_real(13.)*ex4 - dd_real(9.)*pow(ex4,2))) + pow(ex2,6)*pow(ex3,3)*(dd_real(2.)*(-dd_real(3.) - dd_real(5.)*ex4 + pow(ex4,2)) + dd_real(4.)*pow(ex3,2)*(dd_real(3.) - dd_real(8.)*ex4 + dd_real(3.)*pow(ex4,2)) + ex3*(-dd_real(3.) - dd_real(25.)*ex4 + dd_real(24.)*pow(ex4,2))) + pow(ex2,2)*pow(dd_real(1.) + ex3,2)*pow(ex4,2)*(dd_real(2.)*ex4*pow(dd_real(1.) + ex4,2) + dd_real(4.)*pow(ex3,3)*(dd_real(3.) - dd_real(8.)*ex4 + dd_real(3.)*pow(ex4,2)) - dd_real(1.)*ex3*(dd_real(5.) + dd_real(2.)*ex4 - dd_real(17.)*pow(ex4,2) + dd_real(4.)*pow(ex4,3)) - dd_real(1.)*pow(ex3,2)*(dd_real(6.) + dd_real(26.)*ex4 - dd_real(45.)*pow(ex4,2) + dd_real(9.)*pow(ex4,3))) + pow(ex2,5)*pow(ex3,2)*(ex4*(dd_real(10.) + dd_real(19.)*ex4 + dd_real(7.)*pow(ex4,2)) - dd_real(8.)*pow(ex3,3)*(-dd_real(1.) + dd_real(6.)*ex4 - dd_real(6.)*pow(ex4,2) + pow(ex4,3)) - dd_real(6.)*ex3*(dd_real(2.) + ex4 - dd_real(7.)*pow(ex4,2) + dd_real(2.)*pow(ex4,3)) - dd_real(3.)*pow(ex3,2)*(dd_real(1.) + dd_real(11.)*ex4 - dd_real(30.)*pow(ex4,2) + dd_real(10.)*pow(ex4,3))) + pow(ex2,3)*(dd_real(1.) + ex3)*ex4*(pow(ex4,2)*pow(dd_real(1.) + ex4,2) + dd_real(8.)*pow(ex3,4)*(-dd_real(1.) + dd_real(6.)*ex4 - dd_real(6.)*pow(ex4,2) + pow(ex4,3)) + dd_real(2.)*ex3*ex4*(-dd_real(6.) - dd_real(10.)*ex4 - dd_real(1.)*pow(ex4,2) + pow(ex4,3)) + pow(ex3,3)*(dd_real(4.) + dd_real(30.)*ex4 - dd_real(102.)*pow(ex4,2) + dd_real(47.)*pow(ex4,3) - dd_real(3.)*pow(ex4,4)) + pow(ex3,2)*(dd_real(10.) - dd_real(2.)*ex4 - dd_real(49.)*pow(ex4,2) + dd_real(31.)*pow(ex4,3) - dd_real(2.)*pow(ex4,4))) + pow(ex2,4)*ex3*(-dd_real(5.)*pow(ex4,2)*pow(dd_real(1.) + ex4,2) + ex3*ex4*(dd_real(20.) + dd_real(21.)*ex4 - dd_real(27.)*pow(ex4,2) - dd_real(6.)*pow(ex4,3)) + dd_real(2.)*pow(ex3,4)*(dd_real(1.) - dd_real(16.)*ex4 + dd_real(36.)*pow(ex4,2) - dd_real(16.)*pow(ex4,3) + pow(ex4,4)) + pow(ex3,2)*(-dd_real(6.) + dd_real(18.)*ex4 + dd_real(73.)*pow(ex4,2) - dd_real(88.)*pow(ex4,3) + dd_real(15.)*pow(ex4,4)) + pow(ex3,3)*(-dd_real(1.) - dd_real(19.)*ex4 + dd_real(126.)*pow(ex4,2) - dd_real(110.)*pow(ex4,3) + dd_real(16.)*pow(ex4,4)));
return res;
}
