#include <iostream>
#include "listYgg2Lnf0ppnn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnn209(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
pow(ex2,5)*pow(ex3,4)*(dd_real(3.)*ex4 + dd_real(20.)*ex6) + ex4*(-dd_real(1.)*ex3*ex4*(ex4 - dd_real(41.)*ex6)*pow(ex6,2) + pow(ex6,3)*(dd_real(2.)*ex4 + dd_real(3.)*ex6) + pow(ex3,4)*pow(ex4,3)*(dd_real(3.)*ex4 + dd_real(40.)*ex6) + dd_real(6.)*pow(ex3,2)*ex4*ex6*(dd_real(5.)*pow(ex4,2) + dd_real(9.)*ex4*ex6 + dd_real(4.)*pow(ex6,2)) + pow(ex3,3)*pow(ex4,2)*(-dd_real(3.)*pow(ex4,2) + dd_real(91.)*ex4*ex6 + dd_real(28.)*pow(ex6,2))) + ex2*ex4*(-dd_real(2.)*pow(ex6,3) + ex3*pow(ex6,2)*(ex4*(dd_real(2.) + dd_real(3.)*ex6) - dd_real(1.)*ex6*(dd_real(46.) + dd_real(3.)*ex6)) + pow(ex3,4)*pow(ex4,2)*(dd_real(3.)*pow(ex4,2) - dd_real(160.)*ex6 + dd_real(4.)*ex4*(-dd_real(3.) + dd_real(5.)*ex6)) + pow(ex3,2)*ex6*(dd_real(9.)*pow(ex4,2)*(-dd_real(10.) + ex6) - dd_real(48.)*pow(ex6,2) + dd_real(2.)*ex4*ex6*(-dd_real(58.) + dd_real(7.)*ex6)) + pow(ex3,3)*ex4*(-dd_real(84.)*pow(ex6,2) + dd_real(3.)*pow(ex4,2)*(dd_real(4.) + dd_real(3.)*ex6) + ex4*ex6*(-dd_real(312.) + dd_real(37.)*ex6))) + pow(ex2,2)*ex3*(dd_real(2.)*ex3*ex6*(-dd_real(9.)*pow(ex4,2)*(-dd_real(5.) + ex6) + dd_real(12.)*pow(ex6,2) - dd_real(7.)*ex4*ex6*(-dd_real(5.) + dd_real(2.)*ex6)) + pow(ex6,2)*(-dd_real(1.)*ex4*(dd_real(1.) + dd_real(3.)*ex6) + ex6*(dd_real(5.) + dd_real(3.)*ex6)) - dd_real(3.)*pow(ex3,2)*ex4*(-dd_real(28.)*pow(ex6,2) + pow(ex4,2)*(dd_real(6.) + dd_real(9.)*ex6) + ex4*ex6*(-dd_real(130.) + dd_real(37.)*ex6)) - dd_real(2.)*pow(ex3,3)*pow(ex4,2)*(dd_real(6.)*pow(ex4,2) - dd_real(120.)*ex6 + ex4*(-dd_real(9.) + dd_real(40.)*ex6))) - dd_real(1.)*pow(ex2,4)*pow(ex3,3)*(dd_real(12.)*ex3*pow(ex4,2) + ex6*(-dd_real(39.) - dd_real(40.)*ex3 + dd_real(37.)*ex6) + ex4*(dd_real(3.) + dd_real(9.)*ex6 + ex3*(-dd_real(3.) + dd_real(80.)*ex6))) + pow(ex2,3)*pow(ex3,2)*(ex6*(dd_real(2.)*ex6*(-dd_real(4.) + dd_real(7.)*ex6) + ex4*(-dd_real(30.) + dd_real(9.)*ex6)) + dd_real(2.)*pow(ex3,2)*ex4*(dd_real(9.)*pow(ex4,2) - dd_real(80.)*ex6 + ex4*(-dd_real(6.) + dd_real(60.)*ex6)) + ex3*(-dd_real(28.)*pow(ex6,2) + dd_real(3.)*pow(ex4,2)*(dd_real(4.) + dd_real(9.)*ex6) + ex4*ex6*(-dd_real(208.) + dd_real(111.)*ex6)));
return res;
}
