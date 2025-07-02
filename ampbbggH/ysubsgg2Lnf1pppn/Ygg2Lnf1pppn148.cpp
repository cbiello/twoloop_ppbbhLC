#include <iostream>
#include "listYgg2Lnf1pppn.h" 
#include <qd/qd_real.h>
#include <complex>
std::complex<dd_real> Ygg2Lnf1pppn148(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
pow(ex2,6)*pow(ex3,4)*(dd_real(11.) + dd_real(30.)*ex3 + dd_real(66.)*pow(ex3,2) + dd_real(37.)*pow(ex3,3)) + pow(dd_real(1.) + ex3,4)*(dd_real(11.) + dd_real(30.)*ex3 + dd_real(66.)*pow(ex3,2) + dd_real(37.)*pow(ex3,3))*pow(ex4,4) + ex2*ex3*pow(dd_real(1.) + ex3,3)*pow(ex4,3)*(-dd_real(47.) + dd_real(60.)*ex3*(-dd_real(2.) + ex4) + dd_real(132.)*pow(ex3,2)*(-dd_real(2.) + ex4) + dd_real(74.)*pow(ex3,3)*(-dd_real(2.) + ex4) + dd_real(22.)*ex4) - dd_real(2.)*pow(ex2,5)*pow(ex3,3)*(dd_real(8.)*ex4 + dd_real(37.)*pow(ex3,4)*(-dd_real(1.) + dd_real(2.)*ex4) + dd_real(6.)*pow(ex3,2)*(-dd_real(5.) + dd_real(21.)*ex4) + ex3*(-dd_real(11.) + dd_real(49.)*ex4) + pow(ex3,3)*(-dd_real(66.) + dd_real(169.)*ex4)) + pow(ex2,2)*ex3*pow(dd_real(1.) + ex3,2)*pow(ex4,2)*(-dd_real(25.)*ex4 + dd_real(37.)*pow(ex3,4)*(dd_real(6.) - dd_real(8.)*ex4 + pow(ex4,2)) + dd_real(6.)*pow(ex3,2)*(dd_real(30.) - dd_real(62.)*ex4 + dd_real(5.)*pow(ex4,2)) + ex3*(dd_real(63.) - dd_real(154.)*ex4 + dd_real(11.)*pow(ex4,2)) + pow(ex3,3)*(dd_real(396.) - dd_real(602.)*ex4 + dd_real(66.)*pow(ex4,2))) - dd_real(1.)*pow(ex2,3)*pow(ex3,2)*(dd_real(1.) + ex3)*ex4*(ex4*(-dd_real(63.) + dd_real(25.)*ex4) + dd_real(148.)*pow(ex3,4)*(dd_real(1.) - dd_real(3.)*ex4 + pow(ex4,2)) + dd_real(12.)*pow(ex3,2)*(dd_real(10.) - dd_real(63.)*ex4 + dd_real(21.)*pow(ex4,2)) + ex3*(dd_real(38.) - dd_real(306.)*ex4 + dd_real(107.)*pow(ex4,2)) + dd_real(2.)*pow(ex3,3)*(dd_real(132.) - dd_real(507.)*ex4 + dd_real(169.)*pow(ex4,2))) + pow(ex2,4)*pow(ex3,2)*(dd_real(11.)*pow(ex4,2) + dd_real(3.)*ex3*ex4*(-dd_real(18.) + dd_real(31.)*ex4) + dd_real(37.)*pow(ex3,5)*(dd_real(1.) - dd_real(8.)*ex4 + dd_real(6.)*pow(ex4,2)) + pow(ex3,2)*(dd_real(11.) - dd_real(256.)*ex4 + dd_real(309.)*pow(ex4,2)) + pow(ex3,3)*(dd_real(30.) - dd_real(636.)*ex4 + dd_real(613.)*pow(ex4,2)) + pow(ex3,4)*(dd_real(66.) - dd_real(750.)*ex4 + dd_real(618.)*pow(ex4,2)));
return res;
}
