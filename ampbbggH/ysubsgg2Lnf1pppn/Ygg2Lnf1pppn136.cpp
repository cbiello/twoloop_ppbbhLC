#include <iostream>
#include "listYgg2Lnf1pppn.h" 
#include <qd/qd_real.h>
#include <complex>
std::complex<dd_real> Ygg2Lnf1pppn136(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(2.)*pow(ex2,6)*pow(ex3,4)*(-dd_real(32.) + dd_real(18.)*ex3 + dd_real(63.)*pow(ex3,2) + dd_real(37.)*pow(ex3,3)) + ex2*ex3*pow(dd_real(1.) + ex3,3)*(dd_real(235.) + dd_real(72.)*ex3*(-dd_real(2.) + ex4) + dd_real(252.)*pow(ex3,2)*(-dd_real(2.) + ex4) + dd_real(148.)*pow(ex3,3)*(-dd_real(2.) + ex4) - dd_real(128.)*ex4)*pow(ex4,3) + dd_real(2.)*pow(dd_real(1.) + ex3,4)*(-dd_real(32.) + dd_real(18.)*ex3 + dd_real(63.)*pow(ex3,2) + dd_real(37.)*pow(ex3,3))*pow(ex4,4) - dd_real(2.)*pow(ex2,5)*pow(ex3,3)*(ex3*(dd_real(64.) - dd_real(113.)*ex4) - dd_real(85.)*ex4 + dd_real(74.)*pow(ex3,4)*(-dd_real(1.) + dd_real(2.)*ex4) + dd_real(18.)*pow(ex3,2)*(-dd_real(2.) + dd_real(11.)*ex4) + dd_real(2.)*pow(ex3,3)*(-dd_real(63.) + dd_real(163.)*ex4)) + pow(ex2,2)*ex3*pow(dd_real(1.) + ex3,2)*pow(ex4,2)*(dd_real(107.)*ex4 + ex3*(-dd_real(405.) + dd_real(398.)*ex4 - dd_real(64.)*pow(ex4,2)) + dd_real(36.)*pow(ex3,2)*(dd_real(6.) - dd_real(15.)*ex4 + pow(ex4,2)) + dd_real(74.)*pow(ex3,4)*(dd_real(6.) - dd_real(8.)*ex4 + pow(ex4,2)) + dd_real(2.)*pow(ex3,3)*(dd_real(378.) - dd_real(578.)*ex4 + dd_real(63.)*pow(ex4,2))) - dd_real(1.)*pow(ex2,3)*pow(ex3,2)*(dd_real(1.) + ex3)*ex4*((dd_real(405.) - dd_real(107.)*ex4)*ex4 + ex3*(-dd_real(298.) + dd_real(594.)*ex4 - dd_real(163.)*pow(ex4,2)) + dd_real(296.)*pow(ex3,4)*(dd_real(1.) - dd_real(3.)*ex4 + pow(ex4,2)) + dd_real(36.)*pow(ex3,2)*(dd_real(4.) - dd_real(33.)*ex4 + dd_real(11.)*pow(ex4,2)) + dd_real(4.)*pow(ex3,3)*(dd_real(126.) - dd_real(489.)*ex4 + dd_real(163.)*pow(ex4,2))) + pow(ex2,4)*pow(ex3,2)*(-dd_real(64.)*pow(ex4,2) - dd_real(9.)*ex3*ex4*(-dd_real(52.) + dd_real(41.)*ex4) + pow(ex3,2)*(-dd_real(64.) + dd_real(380.)*ex4 - dd_real(63.)*pow(ex4,2)) + dd_real(74.)*pow(ex3,5)*(dd_real(1.) - dd_real(8.)*ex4 + dd_real(6.)*pow(ex4,2)) + dd_real(6.)*pow(ex3,4)*(dd_real(21.) - dd_real(242.)*ex4 + dd_real(200.)*pow(ex4,2)) + dd_real(2.)*pow(ex3,3)*(dd_real(18.) - dd_real(522.)*ex4 + dd_real(523.)*pow(ex4,2)));
return res;
}
