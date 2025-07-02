#include <iostream>
#include "listYgg2Lnf1pppn.h" 
#include <qd/qd_real.h>
#include <complex>
std::complex<dd_real> Ygg2Lnf1pppn92(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
pow(ex2,6)*pow(ex3,4)*(-dd_real(22.) + dd_real(39.)*ex3 + dd_real(30.)*pow(ex3,2)) + dd_real(2.)*ex2*ex3*pow(dd_real(1.) + ex3,3)*(dd_real(50.) + dd_real(39.)*ex3*(-dd_real(2.) + ex4) + dd_real(30.)*pow(ex3,2)*(-dd_real(2.) + ex4) - dd_real(22.)*ex4)*pow(ex4,3) + pow(dd_real(1.) + ex3,4)*(-dd_real(22.) + dd_real(39.)*ex3 + dd_real(30.)*pow(ex3,2))*pow(ex4,4) - dd_real(2.)*pow(ex2,5)*pow(ex3,3)*(-dd_real(10.)*ex4 + dd_real(30.)*pow(ex3,3)*(-dd_real(1.) + dd_real(2.)*ex4) + ex3*(dd_real(22.) + dd_real(7.)*ex4) + dd_real(3.)*pow(ex3,2)*(-dd_real(13.) + dd_real(36.)*ex4)) + pow(ex2,2)*ex3*pow(dd_real(1.) + ex3,2)*pow(ex4,2)*(dd_real(56.)*ex4 + dd_real(30.)*pow(ex3,3)*(dd_real(6.) - dd_real(8.)*ex4 + pow(ex4,2)) - dd_real(2.)*ex3*(dd_real(60.) - dd_real(61.)*ex4 + dd_real(11.)*pow(ex4,2)) + dd_real(3.)*pow(ex3,2)*(dd_real(78.) - dd_real(124.)*ex4 + dd_real(13.)*pow(ex4,2))) - dd_real(2.)*pow(ex2,3)*pow(ex3,2)*(dd_real(1.) + ex3)*ex4*(dd_real(4.)*(dd_real(15.) - dd_real(7.)*ex4)*ex4 + ex3*(-dd_real(32.) + dd_real(3.)*ex4 - dd_real(11.)*pow(ex4,2)) + dd_real(60.)*pow(ex3,3)*(dd_real(1.) - dd_real(3.)*ex4 + pow(ex4,2)) + dd_real(6.)*pow(ex3,2)*(dd_real(13.) - dd_real(54.)*ex4 + dd_real(18.)*pow(ex4,2))) + pow(ex2,4)*pow(ex3,2)*(dd_real(3.)*ex3*(dd_real(28.) - dd_real(27.)*ex4)*ex4 - dd_real(22.)*pow(ex4,2) + dd_real(30.)*pow(ex3,4)*(dd_real(1.) - dd_real(8.)*ex4 + dd_real(6.)*pow(ex4,2)) + dd_real(2.)*pow(ex3,2)*(-dd_real(11.) - dd_real(53.)*ex4 + dd_real(72.)*pow(ex4,2)) + pow(ex3,3)*(dd_real(39.) - dd_real(492.)*ex4 + dd_real(414.)*pow(ex4,2)));
return res;
}
