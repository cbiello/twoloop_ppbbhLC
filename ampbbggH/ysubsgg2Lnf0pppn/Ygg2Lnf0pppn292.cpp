#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn292(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(6.)*pow(ex2,6)*pow(ex3,3) - dd_real(1.)*pow(ex2,5)*pow(ex3,2)*(dd_real(33.) + dd_real(2.)*ex3*(dd_real(10.) + dd_real(18.)*ex4 - dd_real(9.)*ex6)) + pow(ex4,3)*(dd_real(39.) + ex3*(dd_real(20.) + dd_real(6.)*ex4 - dd_real(6.)*ex6))*pow(-dd_real(1.) + ex3*(ex4 - dd_real(1.)*ex6),2) + pow(ex2,4)*pow(ex3,2)*(dd_real(90.)*ex3*pow(ex4,2) + ex4*(dd_real(157.) + ex3*(dd_real(100.) - dd_real(90.)*ex6)) + dd_real(2.)*(-dd_real(5.) - dd_real(4.)*(dd_real(8.) + dd_real(5.)*ex3)*ex6 + dd_real(9.)*ex3*pow(ex6,2))) + pow(ex2,2)*ex3*ex4*(dd_real(14.) + dd_real(90.)*pow(ex3,2)*pow(ex4,3) + dd_real(60.)*(dd_real(1.) + ex3)*ex6 + ex3*(dd_real(89.) + dd_real(60.)*ex3)*pow(ex6,2) - dd_real(18.)*pow(ex3,2)*pow(ex6,3) + dd_real(2.)*ex4*(-dd_real(99.) - dd_real(25.)*ex3*(dd_real(3.) + dd_real(7.)*ex6) + dd_real(6.)*pow(ex3,2)*ex6*(-dd_real(20.) + dd_real(9.)*ex6)) - dd_real(4.)*ex3*pow(ex4,2)*(-dd_real(72.) + dd_real(5.)*ex3*(-dd_real(10.) + dd_real(9.)*ex6))) - dd_real(1.)*ex2*pow(ex4,2)*(dd_real(33.) + ex3*(dd_real(34.) - dd_real(204.)*ex4 + dd_real(132.)*ex6) + dd_real(2.)*pow(ex3,3)*(dd_real(18.)*pow(ex4,3) + pow(ex4,2)*(dd_real(50.) - dd_real(45.)*ex6) + dd_real(3.)*(dd_real(10.) - dd_real(3.)*ex6)*pow(ex6,2) + dd_real(4.)*ex4*ex6*(-dd_real(20.) + dd_real(9.)*ex6)) + pow(ex3,2)*(dd_real(139.)*pow(ex4,2) + dd_real(5.)*ex6*(dd_real(18.) + dd_real(17.)*ex6) - dd_real(2.)*ex4*(dd_real(65.) + dd_real(112.)*ex6))) + pow(ex2,3)*ex3*(-dd_real(120.)*pow(ex3,2)*pow(ex4,3) + ex3*ex6*(-dd_real(10.) - dd_real(1.)*(dd_real(31.) + dd_real(20.)*ex3)*ex6 + dd_real(6.)*ex3*pow(ex6,2)) + dd_real(20.)*ex3*pow(ex4,2)*(-dd_real(15.) + ex3*(-dd_real(10.) + dd_real(9.)*ex6)) + ex4*(dd_real(66.) - dd_real(8.)*pow(ex3,2)*ex6*(-dd_real(20.) + dd_real(9.)*ex6) + ex3*(dd_real(70.) + dd_real(244.)*ex6)));
return res;
}
